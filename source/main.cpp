/*
sides ==>
   U
 L F R B
   D

index ==>
		 00 01 02
		 03 04 05
		 06 07 08
09 10 11 18 19 20 27 28 29 36 37 38
12 13 14 21 22 23 30 31 32 39 40 41
15 16 17 24 25 26 33 34 35 42 43 44
		 45 46 47
		 48 49 50
		 51 52 53
*/

#include <iostream>
#include <string>
#include <unordered_map>

#include "CubeOps.h"
using namespace std;

void recur(const string& cube, unordered_map<string, string>& allComb, string path) {
	auto it = allComb.emplace(cube, path);
	if (!it.second) {
		if (it.first->second.size() <= path.size()) return;
		it.first->second = path;
	}

	string tmp = cube;
	CubeOps::faceUp(tmp);
	recur(tmp, allComb, path + "U");

	tmp = cube;
	CubeOps::faceDown(tmp);
	recur(tmp, allComb, path + "D");

	tmp = cube;
	CubeOps::faceLeft(tmp);
	recur(tmp, allComb, path + "L");

	tmp = cube;
	CubeOps::faceRight(tmp);
	recur(tmp, allComb, path + "R");
}
int main() {
	// string cube("YYYYYYYYYGGGGGGGGGOOOOOOOOOBBBBBBBBBRRRRRRRRRWWWWWWWWW");
	string cube("abcdefghijklmnopqrstuvwxABCDEFGHIJKLMNOPQRSTUVWX012345");
	CubeOps::print(cube);
	CubeOps::print(CubeOps::faceUp(cube));
	CubeOps::print(CubeOps::rotateRightUp(CubeOps::rotateMidUp(CubeOps::rotateLeftUp(cube))));
	return 0;
	unordered_map<string, string> allComb;
	recur(cube, allComb, "");
	for (auto& ac : allComb) {
		// CubeOp::print(ac.first);
		cout << ac.second << endl;
		// cout << endl;
		// cout << ac.first[0] << ac.first[9] << ac.first[18] << ac.first[27] << ac.first[36] << ac.first[45] << "|" << ac.second << endl;
	}
	cout << allComb.size() << endl;
}

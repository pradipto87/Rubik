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

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#include "CubeOps.h"
using namespace std;

void recur(const string& cube, unordered_map<string, vector<string>>& allComb, string path) {
	auto it = allComb.find(cube);
	if (it == allComb.end()) {
		allComb[cube].push_back(path);
	} else {
		if (!it->second.empty()) {
			if (it->second[0].size() < path.size()) return;
			if (it->second[0].size() > path.size())
				it->second.clear();
		}
		it->second.push_back(path);
	}

	string tmp = cube;
	CubeOps::Face::Up(tmp);
	recur(tmp, allComb, path + "U");

	tmp = cube;
	CubeOps::Face::Down(tmp);
	recur(tmp, allComb, path + "D");

	tmp = cube;
	CubeOps::Face::Left(tmp);
	recur(tmp, allComb, path + "L");

	tmp = cube;
	CubeOps::Face::Right(tmp);
	recur(tmp, allComb, path + "R");

	tmp = cube;
	CubeOps::Face::Clock(tmp);
	recur(tmp, allComb, path + "C");

	tmp = cube;
	CubeOps::Face::AntiClock(tmp);
	recur(tmp, allComb, path + "A");
}
int main() {
	/*string cube("YYYYYYYYYGGGGGGGGGOOOOOOOOOBBBBBBBBBRRRRRRRRRWWWWWWWWW");
	int r{}, f{};
	CubeOps::Rotate::MidUp(cube);
	++r;
	while (true) {
		CubeOps::Face::Left(cube);
		++f;
		CubeOps::Rotate::MidUp(cube);
		++r;
		if (CubeOps::isSolved(cube)) {
			cout << "fl: " << f << ", rr: " << r << endl;
			break;
		}
	}
	return 0;*/

	string cube("0abcdefghijklmnopqrstuvwxyz1ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string tmp = cube;
	CubeOps::Rotate::FaceClock(tmp);
	cout << "FaceClock, " << tmp << endl;

	tmp = cube;
	CubeOps::Rotate::MidClock(tmp);
	cout << "MidClock, " << tmp << endl;

	tmp = cube;
	CubeOps::Rotate::BackClock(tmp);
	cout << "BackClock, " << tmp << endl;

	tmp = cube;
	CubeOps::Rotate::FaceAntiClock(tmp);
	cout << "FaceAntiClock, " << tmp << endl;

	tmp = cube;
	CubeOps::Rotate::MidAntiClock(tmp);
	cout << "MidAntiClock, " << tmp << endl;

	tmp = cube;
	CubeOps::Rotate::BackAntiClock(tmp);
	cout << "BackAntiClock, " << tmp << endl;

	return 0;

	unordered_map<string, vector<string>>
		allComb;
	recur(cube, allComb, "");
	vector<vector<string>> allCombVec;
	for (auto& ac : allComb) {
		ranges::sort(ac.second);
		allCombVec.push_back(ac.second);
	}
	sort(allCombVec.begin(), allCombVec.end(), [](const vector<string>& a, const vector<string>& b) {
		if (a.empty())
			return true;
		if (b.empty())
			return false;
		if (a[0].size() == b[0].size())
			return a[0] < b[0];
		return a[0].size() < b[0].size();
	});
	for (const auto& acv : allCombVec) {
		cout << "|";
		for (const auto& ac : acv)
			cout << ac << "|";
		cout << endl;
	}
	cout << allComb.size() << endl;
}
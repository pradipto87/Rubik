#include "CubeOps.h"

#include <algorithm>
#include <array>
#include <iostream>
#include <string>

namespace {

// 012345678
void copySide2D(std::string& dest, const int d, const std::string& src, const int s) {
	for (int i = 0; i < 9; ++i)
		dest[d + i] = src[s + i];
}

// 258147036
void rotateAnti2D(std::string& dest, const int d, const std::string& src, const int s) {
	dest[d + 0] = src[s + 2];
	dest[d + 1] = src[s + 5];
	dest[d + 2] = src[s + 8];
	dest[d + 3] = src[s + 1];
	dest[d + 4] = src[s + 4];
	dest[d + 5] = src[s + 7];
	dest[d + 6] = src[s + 0];
	dest[d + 7] = src[s + 3];
	dest[d + 8] = src[s + 6];
}

// 630741852
void rotateClock2D(std::string& dest, const int d, const std::string& src, const int s) {
	dest[d + 0] = src[s + 6];
	dest[d + 1] = src[s + 3];
	dest[d + 2] = src[s + 0];
	dest[d + 3] = src[s + 7];
	dest[d + 4] = src[s + 4];
	dest[d + 5] = src[s + 1];
	dest[d + 6] = src[s + 8];
	dest[d + 7] = src[s + 5];
	dest[d + 8] = src[s + 2];
}

// 876543210
void copyReflection2D(std::string& dest, const int d, const std::string& src, const int s) {
	for (int i = 0; i < 9; ++i)
		dest[d + i] = src[s + 8 - i];
}

}  // namespace
namespace CubeOps {
std::string faceUp(const std::string temp) {
	return rotateRightUp(rotateMidUp(rotateLeftUp(temp)));
	std::string cube = temp;
	copySide2D(cube, 0, temp, 18);
	rotateAnti2D(cube, 9, temp, 9);
	copySide2D(cube, 18, temp, 45);
	rotateClock2D(cube, 27, temp, 27);
	copyReflection2D(cube, 36, temp, 0);
	copyReflection2D(cube, 45, temp, 36);
	return cube;
}
std::string faceDown(const std::string temp) {
	std::string cube = temp;
	copyReflection2D(cube, 0, temp, 36);
	rotateClock2D(cube, 9, temp, 9);
	copySide2D(cube, 18, temp, 0);
	rotateAnti2D(cube, 27, temp, 27);
	copyReflection2D(cube, 36, temp, 45);
	copySide2D(cube, 45, temp, 18);
	return cube;
}
std::string faceLeft(const std::string temp) {
	std::string cube = temp;
	rotateClock2D(cube, 0, temp, 0);
	copySide2D(cube, 9, temp, 18);
	copySide2D(cube, 18, temp, 27);
	copySide2D(cube, 27, temp, 36);
	copySide2D(cube, 36, temp, 9);
	rotateAnti2D(cube, 45, temp, 45);
	return cube;
}
std::string faceRight(const std::string temp) {
	std::string cube = temp;
	rotateAnti2D(cube, 0, temp, 0);
	copySide2D(cube, 9, temp, 36);
	copySide2D(cube, 18, temp, 9);
	copySide2D(cube, 27, temp, 18);
	copySide2D(cube, 36, temp, 27);
	rotateClock2D(cube, 45, temp, 45);
	return cube;
}
std::string rotateLeftUp(const std::string temp) {
	std::string cube = temp;
	cube[0] = temp[18];
	cube[3] = temp[21];
	cube[6] = temp[24];
	cube[18] = temp[45];
	cube[21] = temp[48];
	cube[24] = temp[51];
	cube[38] = temp[6];
	cube[41] = temp[3];
	cube[44] = temp[0];
	cube[45] = temp[44];
	cube[48] = temp[41];
	cube[51] = temp[38];
	rotateAnti2D(cube, 9, temp, 9);
	return cube;
}
std::string rotateMidUp(std::string temp) {
	std::string cube = temp;
	cube[1] = temp[19];
	cube[4] = temp[22];
	cube[7] = temp[25];
	cube[19] = temp[46];
	cube[22] = temp[49];
	cube[25] = temp[52];
	cube[37] = temp[7];
	cube[40] = temp[4];
	cube[43] = temp[1];
	cube[46] = temp[43];
	cube[49] = temp[40];
	cube[52] = temp[37];
	return cube;
}
std::string rotateRightUp(const std::string temp) {
	std::string cube = temp;
	cube[2] = temp[20];
	cube[5] = temp[23];
	cube[8] = temp[26];
	cube[20] = temp[47];
	cube[23] = temp[50];
	cube[26] = temp[53];
	cube[36] = temp[8];
	cube[39] = temp[5];
	cube[42] = temp[2];
	cube[47] = temp[42];
	cube[50] = temp[39];
	cube[53] = temp[36];
	rotateClock2D(cube, 27, temp, 27);
	return cube;
}
std::string rotateLeftDown(const std::string temp) {
	std::string cube = temp;
	cube[0] = temp[44];
	cube[3] = temp[41];
	cube[6] = temp[38];
	cube[18] = temp[0];
	cube[21] = temp[3];
	cube[24] = temp[6];
	cube[38] = temp[51];
	cube[41] = temp[48];
	cube[44] = temp[45];
	cube[45] = temp[18];
	cube[48] = temp[21];
	cube[51] = temp[24];
	rotateClock2D(cube, 9, temp, 9);
	return cube;
}
std::string rotateMidDown(const std::string temp) {
	std::string cube = temp;
	cube[1] = temp[43];
	cube[4] = temp[40];
	cube[7] = temp[37];
	cube[19] = temp[1];
	cube[22] = temp[4];
	cube[25] = temp[7];
	cube[37] = temp[52];
	cube[40] = temp[49];
	cube[43] = temp[46];
	cube[46] = temp[19];
	cube[49] = temp[22];
	cube[52] = temp[25];
	return cube;
}
std::string rotateRightDown(const std::string temp) {
	std::string cube = temp;
	cube[2] = temp[42];
	cube[5] = temp[39];
	cube[8] = temp[36];
	cube[20] = temp[2];
	cube[23] = temp[5];
	cube[26] = temp[8];
	cube[36] = temp[53];
	cube[39] = temp[50];
	cube[42] = temp[47];
	cube[47] = temp[20];
	cube[50] = temp[23];
	cube[53] = temp[26];
	rotateAnti2D(cube, 27, temp, 27);
	return cube;
}
std::string rotateTopLeft(const std::string temp) {
	std::string cube = temp;
	cube[0] = temp[6];
	cube[1] = temp[3];
	cube[2] = temp[0];
	cube[3] = temp[7];
	cube[5] = temp[1];
	cube[6] = temp[8];
	cube[7] = temp[5];
	cube[8] = temp[2];
	cube[9] = temp[18];
	cube[10] = temp[19];
	cube[11] = temp[20];
	cube[18] = temp[27];
	cube[19] = temp[28];
	cube[20] = temp[29];
	cube[27] = temp[36];
	cube[28] = temp[37];
	cube[29] = temp[38];
	cube[36] = temp[9];
	cube[37] = temp[10];
	cube[38] = temp[11];
	return cube;
}
std::string rotateMidLeft(const std::string temp) {
	std::string cube = temp;
	cube[12] = temp[21];
	cube[13] = temp[22];
	cube[14] = temp[23];
	cube[21] = temp[30];
	cube[22] = temp[31];
	cube[23] = temp[32];
	cube[30] = temp[39];
	cube[31] = temp[40];
	cube[32] = temp[41];
	cube[39] = temp[12];
	cube[40] = temp[13];
	cube[41] = temp[14];
	return cube;
}
std::string rotateBottomLeft(const std::string temp) {
	std::string cube = temp;
	cube[15] = temp[24];
	cube[16] = temp[25];
	cube[17] = temp[26];
	cube[24] = temp[33];
	cube[25] = temp[34];
	cube[26] = temp[35];
	cube[33] = temp[42];
	cube[34] = temp[43];
	cube[35] = temp[44];
	cube[42] = temp[15];
	cube[43] = temp[16];
	cube[44] = temp[17];
	cube[45] = temp[47];
	cube[46] = temp[50];
	cube[47] = temp[53];
	cube[48] = temp[46];
	cube[50] = temp[52];
	cube[51] = temp[45];
	cube[52] = temp[48];
	cube[53] = temp[51];
	return cube;
}
std::string rotateTopRight(const std::string temp) {
	std::string cube = temp;
	cube[0] = temp[2];
	cube[1] = temp[5];
	cube[2] = temp[8];
	cube[3] = temp[1];
	cube[5] = temp[7];
	cube[6] = temp[0];
	cube[7] = temp[3];
	cube[8] = temp[6];
	cube[9] = temp[36];
	cube[10] = temp[37];
	cube[11] = temp[38];
	cube[18] = temp[9];
	cube[19] = temp[10];
	cube[20] = temp[11];
	cube[27] = temp[18];
	cube[28] = temp[19];
	cube[29] = temp[20];
	cube[36] = temp[27];
	cube[37] = temp[28];
	cube[38] = temp[29];
	return cube;
}
std::string rotateMidRight(const std::string temp) {
	std::string cube = temp;
	cube[12] = temp[39];
	cube[13] = temp[40];
	cube[14] = temp[41];
	cube[21] = temp[12];
	cube[22] = temp[13];
	cube[23] = temp[14];
	cube[30] = temp[21];
	cube[31] = temp[22];
	cube[32] = temp[23];
	cube[39] = temp[30];
	cube[40] = temp[31];
	cube[41] = temp[32];
	return cube;
}
std::string rotateBottomRight(const std::string temp) {
	std::string cube = temp;
	cube[15] = temp[42];
	cube[16] = temp[43];
	cube[17] = temp[44];
	cube[24] = temp[15];
	cube[25] = temp[16];
	cube[26] = temp[17];
	cube[33] = temp[24];
	cube[34] = temp[25];
	cube[35] = temp[26];
	cube[42] = temp[33];
	cube[43] = temp[34];
	cube[44] = temp[35];
	cube[45] = temp[51];
	cube[46] = temp[48];
	cube[47] = temp[45];
	cube[48] = temp[52];
	cube[50] = temp[46];
	cube[51] = temp[53];
	cube[52] = temp[50];
	cube[53] = temp[47];
	return cube;
}
std::string getLowestComb(const std::string cube) {
	std::array<std::string, 24> allComb;
	allComb[0] = cube;
	allComb[1] = faceDown(allComb[0]);
	allComb[2] = faceLeft(allComb[0]);
	allComb[3] = faceRight(allComb[0]);
	allComb[4] = faceUp(allComb[0]);
	allComb[5] = faceLeft(allComb[1]);
	allComb[6] = faceRight(allComb[1]);
	allComb[7] = faceDown(allComb[2]);
	allComb[8] = faceLeft(allComb[2]);
	allComb[9] = faceUp(allComb[2]);
	allComb[10] = faceDown(allComb[3]);
	allComb[11] = faceUp(allComb[3]);
	allComb[12] = faceLeft(allComb[4]);
	allComb[13] = faceRight(allComb[4]);
	allComb[14] = faceUp(allComb[4]);
	allComb[15] = faceLeft(allComb[5]);
	allComb[16] = faceDown(allComb[12]);
	allComb[17] = faceLeft(allComb[12]);
	allComb[18] = faceUp(allComb[12]);
	allComb[19] = faceDown(allComb[13]);
	allComb[20] = faceUp(allComb[13]);
	allComb[21] = faceLeft(allComb[14]);
	allComb[22] = faceRight(allComb[14]);
	allComb[23] = faceLeft(allComb[21]);
	return *std::min_element(allComb.begin(), allComb.end());
}
void print(const std::string& cube) {
	std::cout << "          +-------+" << std::endl;
	std::cout << "          | " << cube[0] << " " << cube[1] << " " << cube[2]
			  << " |" << std::endl;
	std::cout << "          | " << cube[3] << " " << cube[4] << " " << cube[5]
			  << " |" << std::endl;
	std::cout << "          | " << cube[6] << " " << cube[7] << " " << cube[8]
			  << " |" << std::endl;
	std::cout << "          +-------+" << std::endl;
	std::cout << "+-------+ +-------+ +-------+ +-------+" << std::endl;
	std::cout << "| " << cube[9] << " " << cube[10] << " " << cube[11]
			  << " | | " << cube[18] << " " << cube[19] << " " << cube[20]
			  << " | | " << cube[27] << " " << cube[28] << " " << cube[29]
			  << " | | " << cube[36] << " " << cube[37] << " " << cube[38]
			  << " |" << std::endl;
	std::cout << "| " << cube[12] << " " << cube[13] << " " << cube[14]
			  << " | | " << cube[21] << " " << cube[22] << " " << cube[23]
			  << " | | " << cube[30] << " " << cube[31] << " " << cube[32]
			  << " | | " << cube[39] << " " << cube[40] << " " << cube[41]
			  << " |" << std::endl;
	std::cout << "| " << cube[15] << " " << cube[16] << " " << cube[17]
			  << " | | " << cube[24] << " " << cube[25] << " " << cube[26]
			  << " | | " << cube[33] << " " << cube[34] << " " << cube[35]
			  << " | | " << cube[42] << " " << cube[43] << " " << cube[44]
			  << " |" << std::endl;
	std::cout << "+-------+ +-------+ +-------+ +-------+" << std::endl;
	std::cout << "          +-------+" << std::endl;
	std::cout << "          | " << cube[45] << " " << cube[46] << " "
			  << cube[47] << " |" << std::endl;
	std::cout << "          | " << cube[48] << " " << cube[49] << " "
			  << cube[50] << " |" << std::endl;
	std::cout << "          | " << cube[51] << " " << cube[52] << " "
			  << cube[53] << " |" << std::endl;
	std::cout << "          +-------+" << std::endl;
}
}  // namespace CubeOps

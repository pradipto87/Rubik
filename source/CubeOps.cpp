#include "CubeOps.h"

#include <algorithm>
#include <array>
#include <iostream>
#include <string>

namespace CubeOps {
void faceUp(std::string& cube) {
	rotateLeftUp(cube);
	rotateMidUp(cube);
	rotateRightUp(cube);
}
void faceDown(std::string& cube) {
	rotateLeftDown(cube);
	rotateMidDown(cube);
	rotateRightDown(cube);
}
void faceLeft(std::string& cube) {
	rotateTopLeft(cube);
	rotateMidLeft(cube);
	rotateBottomLeft(cube);
}
void faceRight(std::string& cube) {
	rotateTopRight(cube);
	rotateMidRight(cube);
	rotateBottomRight(cube);
}
void rotateLeftUp(std::string& cube) {
	char tmp;

	tmp = cube[0];
	cube[0] = cube[18];
	cube[18] = cube[45];
	cube[45] = cube[44];
	cube[44] = tmp;

	tmp = cube[3];
	cube[3] = cube[21];
	cube[21] = cube[48];
	cube[48] = cube[41];
	cube[41] = tmp;

	tmp = cube[6];
	cube[6] = cube[24];
	cube[24] = cube[51];
	cube[51] = cube[38];
	cube[38] = tmp;

	tmp = cube[9];
	cube[9] = cube[11];
	cube[11] = cube[17];
	cube[17] = cube[15];
	cube[15] = tmp;

	tmp = cube[10];
	cube[10] = cube[14];
	cube[14] = cube[16];
	cube[16] = cube[12];
	cube[12] = tmp;
}
void rotateMidUp(std::string& cube) {
	char tmp;

	tmp = cube[1];
	cube[1] = cube[19];
	cube[19] = cube[46];
	cube[46] = cube[43];
	cube[43] = tmp;

	tmp = cube[4];
	cube[4] = cube[22];
	cube[22] = cube[49];
	cube[49] = cube[40];
	cube[40] = tmp;

	tmp = cube[7];
	cube[7] = cube[25];
	cube[25] = cube[52];
	cube[52] = cube[37];
	cube[37] = tmp;
}
void rotateRightUp(std::string& cube) {
	char tmp;

	tmp = cube[2];
	cube[2] = cube[20];
	cube[20] = cube[47];
	cube[47] = cube[42];
	cube[42] = tmp;

	tmp = cube[5];
	cube[5] = cube[23];
	cube[23] = cube[50];
	cube[50] = cube[39];
	cube[39] = tmp;

	tmp = cube[8];
	cube[8] = cube[26];
	cube[26] = cube[53];
	cube[53] = cube[36];
	cube[36] = tmp;

	tmp = cube[27];
	cube[27] = cube[33];
	cube[33] = cube[35];
	cube[35] = cube[29];
	cube[29] = tmp;

	tmp = cube[28];
	cube[28] = cube[30];
	cube[30] = cube[34];
	cube[34] = cube[32];
	cube[32] = tmp;
}
void rotateLeftDown(std::string& cube) {
	char tmp;

	tmp = cube[0];
	cube[0] = cube[44];
	cube[44] = cube[45];
	cube[45] = cube[18];
	cube[18] = tmp;

	tmp = cube[3];
	cube[3] = cube[41];
	cube[41] = cube[48];
	cube[48] = cube[21];
	cube[21] = tmp;

	tmp = cube[6];
	cube[6] = cube[38];
	cube[38] = cube[51];
	cube[51] = cube[24];
	cube[24] = tmp;

	tmp = cube[9];
	cube[9] = cube[15];
	cube[15] = cube[17];
	cube[17] = cube[11];
	cube[11] = tmp;

	tmp = cube[10];
	cube[10] = cube[12];
	cube[12] = cube[16];
	cube[16] = cube[14];
	cube[14] = tmp;
}
void rotateMidDown(std::string& cube) {
	char tmp;

	tmp = cube[1];
	cube[1] = cube[43];
	cube[43] = cube[46];
	cube[46] = cube[19];
	cube[19] = tmp;

	tmp = cube[4];
	cube[4] = cube[40];
	cube[40] = cube[49];
	cube[49] = cube[22];
	cube[22] = tmp;

	tmp = cube[7];
	cube[7] = cube[37];
	cube[37] = cube[52];
	cube[52] = cube[25];
	cube[25] = tmp;
}
void rotateRightDown(std::string& cube) {
	char tmp;

	tmp = cube[2];
	cube[2] = cube[42];
	cube[42] = cube[47];
	cube[47] = cube[20];
	cube[20] = tmp;

	tmp = cube[5];
	cube[5] = cube[39];
	cube[39] = cube[50];
	cube[50] = cube[23];
	cube[23] = tmp;

	tmp = cube[8];
	cube[8] = cube[36];
	cube[36] = cube[53];
	cube[53] = cube[26];
	cube[26] = tmp;

	tmp = cube[27];
	cube[27] = cube[29];
	cube[29] = cube[35];
	cube[35] = cube[33];
	cube[33] = tmp;

	tmp = cube[28];
	cube[28] = cube[32];
	cube[32] = cube[34];
	cube[34] = cube[30];
	cube[30] = tmp;
}
void rotateTopLeft(std::string& cube) {
	char tmp;

	tmp = cube[0];
	cube[0] = cube[6];
	cube[6] = cube[8];
	cube[8] = cube[2];
	cube[2] = tmp;

	tmp = cube[1];
	cube[1] = cube[3];
	cube[3] = cube[7];
	cube[7] = cube[5];
	cube[5] = tmp;

	tmp = cube[9];
	cube[9] = cube[18];
	cube[18] = cube[27];
	cube[27] = cube[36];
	cube[36] = tmp;

	tmp = cube[10];
	cube[10] = cube[19];
	cube[19] = cube[28];
	cube[28] = cube[37];
	cube[37] = tmp;

	tmp = cube[11];
	cube[11] = cube[20];
	cube[20] = cube[29];
	cube[29] = cube[38];
	cube[38] = tmp;
}
void rotateMidLeft(std::string& cube) {
	char tmp;

	tmp = cube[12];
	cube[12] = cube[21];
	cube[21] = cube[30];
	cube[30] = cube[39];
	cube[39] = tmp;

	tmp = cube[13];
	cube[13] = cube[22];
	cube[22] = cube[31];
	cube[31] = cube[40];
	cube[40] = tmp;

	tmp = cube[14];
	cube[14] = cube[23];
	cube[23] = cube[32];
	cube[32] = cube[41];
	cube[41] = tmp;
}
void rotateBottomLeft(std::string& cube) {
	char tmp;

	tmp = cube[15];
	cube[15] = cube[24];
	cube[24] = cube[33];
	cube[33] = cube[42];
	cube[42] = tmp;

	tmp = cube[16];
	cube[16] = cube[25];
	cube[25] = cube[34];
	cube[34] = cube[43];
	cube[43] = tmp;

	tmp = cube[17];
	cube[17] = cube[26];
	cube[26] = cube[35];
	cube[35] = cube[44];
	cube[44] = tmp;

	tmp = cube[45];
	cube[45] = cube[47];
	cube[47] = cube[53];
	cube[53] = cube[51];
	cube[51] = tmp;

	tmp = cube[46];
	cube[46] = cube[50];
	cube[50] = cube[52];
	cube[52] = cube[48];
	cube[48] = tmp;
}
void rotateTopRight(std::string& cube) {
	char tmp;

	tmp = cube[0];
	cube[0] = cube[2];
	cube[2] = cube[8];
	cube[8] = cube[6];
	cube[6] = tmp;

	tmp = cube[1];
	cube[1] = cube[5];
	cube[5] = cube[7];
	cube[7] = cube[3];
	cube[3] = tmp;

	tmp = cube[9];
	cube[9] = cube[36];
	cube[36] = cube[27];
	cube[27] = cube[18];
	cube[18] = tmp;

	tmp = cube[10];
	cube[10] = cube[37];
	cube[37] = cube[28];
	cube[28] = cube[19];
	cube[19] = tmp;

	tmp = cube[11];
	cube[11] = cube[38];
	cube[38] = cube[29];
	cube[29] = cube[20];
	cube[20] = tmp;
}
void rotateMidRight(std::string& cube) {
	char tmp;

	tmp = cube[12];
	cube[12] = cube[39];
	cube[39] = cube[30];
	cube[30] = cube[21];
	cube[21] = tmp;

	tmp = cube[13];
	cube[13] = cube[40];
	cube[40] = cube[31];
	cube[31] = cube[22];
	cube[22] = tmp;

	tmp = cube[14];
	cube[14] = cube[41];
	cube[41] = cube[32];
	cube[32] = cube[23];
	cube[23] = tmp;
}
void rotateBottomRight(std::string& cube) {
	char tmp;

	tmp = cube[15];
	cube[15] = cube[42];
	cube[42] = cube[33];
	cube[33] = cube[24];
	cube[24] = tmp;

	tmp = cube[16];
	cube[16] = cube[43];
	cube[43] = cube[34];
	cube[34] = cube[25];
	cube[25] = tmp;

	tmp = cube[17];
	cube[17] = cube[44];
	cube[44] = cube[35];
	cube[35] = cube[26];
	cube[26] = tmp;

	tmp = cube[45];
	cube[45] = cube[51];
	cube[51] = cube[53];
	cube[53] = cube[47];
	cube[47] = tmp;

	tmp = cube[46];
	cube[46] = cube[48];
	cube[48] = cube[52];
	cube[52] = cube[50];
	cube[50] = tmp;
}
std::string getLowestComb(const std::string cube) {
	std::vector<std::string> allComb(24, cube);
	/*std::array<std::string, 24> allComb;
	allComb[0] = cube;
	allComb[1] = d faceDown(allComb[1]);
	allComb[2] = l faceLeft(allComb[2]);
	allComb[3] = r faceRight(allComb[3]);
	allComb[4] = u faceUp(allComb[4]);

	allComb[5] = dl faceLeft(allComb[1]);
	allComb[6] = dr faceRight(allComb[1]);
	allComb[7] = ld faceDown(allComb[2]);
	allComb[8] = ll faceLeft(allComb[2]);
	allComb[9] = lu faceUp(allComb[2]);
	allComb[10] = rd faceDown(allComb[3]);
	allComb[11] = ru faceUp(allComb[3]);
	allComb[12] = ul faceLeft(allComb[4]);
	allComb[13] = ur faceRight(allComb[4]);
	allComb[14] = uu faceUp(allComb[4]);

	allComb[15] = dll faceLeft(allComb[5]);
	allComb[16] = uld faceDown(allComb[12]);
	allComb[17] = ull faceLeft(allComb[12]);
	allComb[18] = ulu faceUp(allComb[12]);
	allComb[19] = urd faceDown(allComb[13]);
	allComb[20] = uru faceUp(allComb[13]);
	allComb[21] = uul faceLeft(allComb[14]);
	allComb[22] = uur faceRight(allComb[14]);
	allComb[23] = uull faceLeft(allComb[21]);
	return *std::min_element(allComb.begin(), allComb.end());*/
	return cube;
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

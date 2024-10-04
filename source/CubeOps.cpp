#include "CubeOps.h"

#include <array>
#include <iostream>
#include <string>

namespace CubeOps {
namespace Face {
void Up(std::string& cube) {
	Rotate::LeftUp(cube);
	Rotate::MidUp(cube);
	Rotate::RightUp(cube);
}
void Down(std::string& cube) {
	Rotate::LeftDown(cube);
	Rotate::MidDown(cube);
	Rotate::RightDown(cube);
}
void Left(std::string& cube) {
	Rotate::TopLeft(cube);
	Rotate::MidLeft(cube);
	Rotate::BottomLeft(cube);
}
void Right(std::string& cube) {
	Rotate::TopRight(cube);
	Rotate::MidRight(cube);
	Rotate::BottomRight(cube);
}
void Clock(std::string& cube) {
	Rotate::FaceClock(cube);
	Rotate::MidClock(cube);
	Rotate::BackClock(cube);
}
void AntiClock(std::string& cube) {
	Rotate::FaceAntiClock(cube);
	Rotate::MidAntiClock(cube);
	Rotate::BackAntiClock(cube);
}
}  // namespace Face

namespace Rotate {
void LeftUp(std::string& cube) {
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
void MidUp(std::string& cube) {
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
void RightUp(std::string& cube) {
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
void LeftDown(std::string& cube) {
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
void MidDown(std::string& cube) {
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
void RightDown(std::string& cube) {
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
void TopLeft(std::string& cube) {
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
void MidLeft(std::string& cube) {
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
void BottomLeft(std::string& cube) {
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
void TopRight(std::string& cube) {
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
void MidRight(std::string& cube) {
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
void BottomRight(std::string& cube) {
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
void FaceClock(std::string& cube) {
	char tmp;

	tmp = cube[6];
	cube[6] = cube[17];
	cube[17] = cube[47];
	cube[47] = cube[27];
	cube[27] = tmp;

	tmp = cube[7];
	cube[7] = cube[14];
	cube[14] = cube[46];
	cube[46] = cube[30];
	cube[30] = tmp;

	tmp = cube[8];
	cube[8] = cube[11];
	cube[11] = cube[45];
	cube[45] = cube[33];
	cube[33] = tmp;

	tmp = cube[18];
	cube[18] = cube[24];
	cube[24] = cube[26];
	cube[26] = cube[20];
	cube[20] = tmp;

	tmp = cube[19];
	cube[19] = cube[21];
	cube[21] = cube[25];
	cube[25] = cube[23];
	cube[23] = tmp;
}
void MidClock(std::string& cube) {
	char tmp;

	tmp = cube[3];
	cube[3] = cube[16];
	cube[16] = cube[50];
	cube[50] = cube[28];
	cube[28] = tmp;

	tmp = cube[4];
	cube[4] = cube[13];
	cube[13] = cube[49];
	cube[49] = cube[31];
	cube[31] = tmp;

	tmp = cube[5];
	cube[5] = cube[10];
	cube[10] = cube[48];
	cube[48] = cube[34];
	cube[34] = tmp;
}
void BackClock(std::string& cube) {
	char tmp;

	tmp = cube[0];
	cube[0] = cube[15];
	cube[15] = cube[53];
	cube[53] = cube[29];
	cube[29] = tmp;

	tmp = cube[1];
	cube[1] = cube[12];
	cube[12] = cube[52];
	cube[52] = cube[32];
	cube[32] = tmp;

	tmp = cube[2];
	cube[2] = cube[9];
	cube[9] = cube[51];
	cube[51] = cube[35];
	cube[35] = tmp;

	tmp = cube[36];
	cube[36] = cube[38];
	cube[38] = cube[44];
	cube[44] = cube[42];
	cube[42] = tmp;

	tmp = cube[37];
	cube[37] = cube[41];
	cube[41] = cube[43];
	cube[43] = cube[39];
	cube[39] = tmp;
}
void FaceAntiClock(std::string& cube) {
	char tmp;

	tmp = cube[6];
	cube[6] = cube[27];
	cube[27] = cube[47];
	cube[47] = cube[17];
	cube[17] = tmp;

	tmp = cube[7];
	cube[7] = cube[30];
	cube[30] = cube[46];
	cube[46] = cube[14];
	cube[14] = tmp;

	tmp = cube[8];
	cube[8] = cube[33];
	cube[33] = cube[45];
	cube[45] = cube[11];
	cube[11] = tmp;

	tmp = cube[18];
	cube[18] = cube[20];
	cube[20] = cube[26];
	cube[26] = cube[24];
	cube[24] = tmp;

	tmp = cube[19];
	cube[19] = cube[23];
	cube[23] = cube[25];
	cube[25] = cube[21];
	cube[21] = tmp;
}
void MidAntiClock(std::string& cube) {
	char tmp;

	tmp = cube[3];
	cube[3] = cube[28];
	cube[28] = cube[50];
	cube[50] = cube[16];
	cube[16] = tmp;

	tmp = cube[4];
	cube[4] = cube[31];
	cube[31] = cube[49];
	cube[49] = cube[13];
	cube[13] = tmp;

	tmp = cube[5];
	cube[5] = cube[34];
	cube[34] = cube[48];
	cube[48] = cube[10];
	cube[10] = tmp;
}
void BackAntiClock(std::string& cube) {
	char tmp;

	tmp = cube[0];
	cube[0] = cube[29];
	cube[29] = cube[53];
	cube[53] = cube[15];
	cube[15] = tmp;

	tmp = cube[1];
	cube[1] = cube[32];
	cube[32] = cube[52];
	cube[52] = cube[12];
	cube[12] = tmp;

	tmp = cube[2];
	cube[2] = cube[35];
	cube[35] = cube[51];
	cube[51] = cube[9];
	cube[9] = tmp;

	tmp = cube[36];
	cube[36] = cube[42];
	cube[42] = cube[44];
	cube[44] = cube[38];
	cube[38] = tmp;

	tmp = cube[37];
	cube[37] = cube[39];
	cube[39] = cube[43];
	cube[43] = cube[41];
	cube[41] = tmp;
}
}  // namespace Rotate

std::string getLowestComb(const std::string& cube) {
	std::array<std::string, 24> allComb;

	//||
	allComb[0] = cube;

	//|D|
	allComb[1] = allComb[0];
	Face::Down(allComb[1]);

	//|L|
	allComb[2] = allComb[0];
	Face::Left(allComb[2]);

	//|R|
	allComb[3] = allComb[0];
	Face::Right(allComb[3]);

	//|U|
	allComb[4] = allComb[0];
	Face::Up(allComb[4]);

	//|DD|UU|
	allComb[5] = allComb[1];
	Face::Down(allComb[5]);

	//|DL|
	allComb[6] = allComb[1];
	Face::Left(allComb[6]);

	//|DR|
	allComb[7] = allComb[1];
	Face::Right(allComb[7]);

	//|LD|
	allComb[8] = allComb[2];
	Face::Down(allComb[8]);

	//|LL|RR|
	allComb[9] = allComb[2];
	Face::Left(allComb[9]);

	//|LU|
	allComb[10] = allComb[2];
	Face::Up(allComb[10]);

	//|RD|
	allComb[11] = allComb[3];
	Face::Down(allComb[11]);

	//|RU|
	allComb[12] = allComb[3];
	Face::Up(allComb[12]);

	//|UL|
	allComb[13] = allComb[4];
	Face::Left(allComb[13]);

	//|UR|
	allComb[14] = allComb[4];
	Face::Right(allComb[14]);

	//|DDL|RDD|RUU|UUL|
	allComb[15] = allComb[5];
	Face::Left(allComb[15]);

	//|DDR|LDD|LUU|UUR|
	allComb[16] = allComb[5];
	Face::Right(allComb[16]);

	//|DLD|LDL|RUR|URU|
	allComb[17] = allComb[6];
	Face::Down(allComb[17]);

	//|DLL|DRR|LLU|RRU|
	allComb[18] = allComb[6];
	Face::Left(allComb[18]);

	//|DLU|LUR|RDL|URD|
	allComb[19] = allComb[6];
	Face::Up(allComb[19]);

	//|DRD|LUL|RDR|ULU|
	allComb[20] = allComb[7];
	Face::Down(allComb[20]);

	//|DRU|LDR|RUL|ULD|
	allComb[21] = allComb[7];
	Face::Up(allComb[21]);

	//|LLD|RRD|ULL|URR|
	allComb[22] = allComb[9];
	Face::Down(allComb[22]);

	//|DDLL|DDRR|DLLU|DRRU|LDDR|LLDD|LLUU|LUUR|RDDL|RRDD|RRUU|RUUL|ULLD|URRD|UULL|UURR|
	allComb[23] = allComb[15];
	Face::Left(allComb[23]);

	return *std::min_element(allComb.begin(), allComb.end());
}
bool isSolved(const std::string& cube) {
	for (int j = 0; j < 54; j += 9)
		for (int i = 1; i < 9; ++i)
			if (cube[i + j] != cube[j]) return false;
	return true;
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

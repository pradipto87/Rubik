#ifndef CUBE_OPERATION_H
#define CUBE_OPERATION_H

#include <array>
#include <string>

namespace CubeOps {

namespace Face {
void Up(std::string&);
void Down(std::string&);
void Left(std::string&);
void Right(std::string&);
void Clock(std::string&);
void AntiClock(std::string&);
}  // namespace Face

namespace Rotate {
void LeftUp(std::string&);
void MidUp(std::string&);
void RightUp(std::string&);
void LeftDown(std::string&);
void MidDown(std::string&);
void RightDown(std::string&);
void TopLeft(std::string&);
void MidLeft(std::string&);
void BottomLeft(std::string&);
void TopRight(std::string&);
void MidRight(std::string&);
void BottomRight(std::string&);
void FaceClock(std::string& cube);
void MidClock(std::string& cube);
void BackClock(std::string& cube);
void FaceAntiClock(std::string& cube);
void MidAntiClock(std::string& cube);
void BackAntiClock(std::string& cube);
}  // namespace Rotate

std::string getLowestComb(const std::string&);
bool isSolved(const std::string&);
void print(const std::string&);
}  // namespace CubeOps

#endif
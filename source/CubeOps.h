#ifndef CUBE_OPERATION_H
#define CUBE_OPERATION_H

#include <array>
#include <string>

namespace CubeOps {
std::string faceUp(const std::string);
std::string faceDown(const std::string);
std::string faceLeft(const std::string);
std::string faceRight(const std::string);
std::string rotateLeftUp(const std::string);
std::string rotateMidUp(std::string);
std::string rotateRightUp(const std::string);
std::string getLowestComb(const std::string);
void print(const std::string&);
}  // namespace CubeOps

#endif

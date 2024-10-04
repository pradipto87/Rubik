#ifndef CUBE_OPERATION_H
#define CUBE_OPERATION_H

#include <array>
#include <string>

namespace CubeOps {
void faceUp(std::string&);
void faceDown(std::string&);
void faceLeft(std::string&);
void faceRight(std::string&);
void rotateLeftUp(std::string&);
void rotateMidUp(std::string&);
void rotateRightUp(std::string&);
void rotateLeftDown(std::string&);
void rotateMidDown(std::string&);
void rotateRightDown(std::string&);
void rotateTopLeft(std::string&);
void rotateMidLeft(std::string&);
void rotateBottomLeft(std::string&);
void rotateTopRight(std::string&);
void rotateMidRight(std::string&);
void rotateBottomRight(std::string&);
std::string getLowestComb(const std::string);
void print(const std::string&);
}  // namespace CubeOps

#endif

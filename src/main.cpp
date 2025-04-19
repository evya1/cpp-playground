#include <iostream>
#include <Eigen/Dense>
#include "rotate.hpp"

int main() {
    Eigen::Vector2d original(1, 0);
    double angle = M_PI / 4; // 45 degrees

    Eigen::Vector2d rotated = rotateVector(original, angle);

    std::cout << "Original vector: " << original.transpose() << std::endl;
    std::cout << "Rotated vector:  " << rotated.transpose() << std::endl;

    return 0;
}

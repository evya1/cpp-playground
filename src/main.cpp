#include <iostream>
#include <Eigen/Dense>
#include "rotate.hpp"

int main() {
    using std::cout;
    using std::endl;
    Eigen::Vector2d original(1, 0);
    double angle = M_PI / 4; // 45 degrees

    Eigen::Vector2d rotated = rotateVector(original, angle);

    cout << "Original vector: " << original.transpose() << endl;
    cout << "Rotated vector:  " << rotated.transpose() << endl;

    return 0;
}

// Auto-generated module | 2026-05-11T19:40:34.669107
#include <iostream>
#include <vector>

int compute_496() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

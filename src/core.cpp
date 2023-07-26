// Auto-generated module | 2026-05-11T21:59:59.513215
#include <iostream>
#include <vector>

int compute_496() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

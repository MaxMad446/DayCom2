// Auto-generated module | 2026-05-11T21:09:48.318893
#include <iostream>
#include <vector>

int compute_496() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

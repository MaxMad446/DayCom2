// Auto-generated module | 2026-05-11T22:39:32.112063
#include <iostream>
#include <vector>

int compute_496() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

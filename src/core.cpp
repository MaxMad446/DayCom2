// Auto-generated module | 2026-05-12T04:20:28.073763
#include <iostream>
#include <vector>

int compute_496() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

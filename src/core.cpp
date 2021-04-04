// Auto-generated module | 2026-05-12T21:38:24.992104
#include <iostream>
#include <vector>

int compute_496() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T21:01:56.357438
#include <iostream>
#include <vector>

int compute_496() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-14T06:14:05.306554
#include <iostream>
#include <vector>

int compute_496() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

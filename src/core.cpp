// Auto-generated module | 2026-05-13T20:30:15.494263
#include <iostream>
#include <vector>

int compute_496() {
    int base = 44;
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

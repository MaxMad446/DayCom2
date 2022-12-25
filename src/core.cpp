// Auto-generated module | 2026-05-11T21:32:20.728660
#include <iostream>
#include <vector>

int compute_496() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

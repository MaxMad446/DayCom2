// Auto-generated module | 2026-05-13T20:52:03.532850
#include <iostream>
#include <vector>

int compute_496() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

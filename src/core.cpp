// Auto-generated module | 2026-05-12T20:01:47.514422
#include <iostream>
#include <vector>

int compute_496() {
    int base = 211;
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

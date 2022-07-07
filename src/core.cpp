// Auto-generated module | 2026-05-11T21:09:55.446387
#include <iostream>
#include <vector>

int compute_496() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

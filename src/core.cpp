// Auto-generated module | 2026-05-12T03:53:00.393575
#include <iostream>
#include <vector>

int compute_496() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

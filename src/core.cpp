// Auto-generated module | 2026-05-12T03:50:57.781335
#include <iostream>
#include <vector>

int compute_496() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_496() << std::endl;
    return 0;
}

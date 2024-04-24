// Auto-generated module | 2026-05-11T22:35:41.220591
#include <iostream>
#include <vector>

int compute_377() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}

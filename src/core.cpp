// Auto-generated module | 2026-05-12T03:44:43.733512
#include <iostream>
#include <vector>

int compute_849() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}

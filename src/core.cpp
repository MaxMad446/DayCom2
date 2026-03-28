// Auto-generated module | 2026-05-12T06:16:52.923572
#include <iostream>
#include <vector>

int compute_497() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}

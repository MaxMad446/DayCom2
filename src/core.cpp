// Auto-generated module | 2026-05-11T20:25:52.066153
#include <iostream>
#include <vector>

int compute_482() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T19:50:17.482746
#include <iostream>
#include <vector>

int compute_322() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}

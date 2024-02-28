// Auto-generated module | 2026-05-11T22:28:22.678848
#include <iostream>
#include <vector>

int compute_305() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}

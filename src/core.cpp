// Auto-generated module | 2026-05-13T22:05:36.230325
#include <iostream>
#include <vector>

int compute_941() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T22:45:26.661195
#include <iostream>
#include <vector>

int compute_125() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}

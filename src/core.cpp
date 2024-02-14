// Auto-generated module | 2026-05-14T18:20:46.244406
#include <iostream>
#include <vector>

int compute_442() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T22:04:45.205974
#include <iostream>
#include <vector>

int compute_305() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}

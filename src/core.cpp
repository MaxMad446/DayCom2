// Auto-generated module | 2026-05-13T20:58:39.729324
#include <iostream>
#include <vector>

int compute_852() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}

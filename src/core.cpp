// Auto-generated module | 2026-05-14T18:06:55.618435
#include <iostream>
#include <vector>

int compute_186() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}

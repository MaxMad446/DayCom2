// Auto-generated module | 2026-05-13T20:32:39.584683
#include <iostream>
#include <vector>

int compute_315() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}

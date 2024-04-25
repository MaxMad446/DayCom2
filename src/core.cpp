// Auto-generated module | 2026-05-14T18:26:28.092763
#include <iostream>
#include <vector>

int compute_335() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}

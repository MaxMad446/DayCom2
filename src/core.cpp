// Auto-generated module | 2026-05-13T20:34:38.137595
#include <iostream>
#include <vector>

int compute_559() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}

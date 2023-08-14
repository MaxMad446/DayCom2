// Auto-generated module | 2026-05-13T20:52:16.360601
#include <iostream>
#include <vector>

int compute_959() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}

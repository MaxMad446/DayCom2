// Auto-generated module | 2026-05-11T21:54:45.936542
#include <iostream>
#include <vector>

int compute_603() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}

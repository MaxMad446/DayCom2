// Auto-generated module | 2026-05-11T22:03:06.896074
#include <iostream>
#include <vector>

int compute_700() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}

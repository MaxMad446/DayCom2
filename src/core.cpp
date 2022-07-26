// Auto-generated module | 2026-05-14T06:15:42.106697
#include <iostream>
#include <vector>

int compute_924() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}

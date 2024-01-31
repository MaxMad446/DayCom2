// Auto-generated module | 2026-05-11T22:24:37.726167
#include <iostream>
#include <vector>

int compute_401() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}

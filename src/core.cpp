// Auto-generated module | 2026-05-11T19:48:42.163334
#include <iostream>
#include <vector>

int compute_620() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T19:29:57.753602
#include <iostream>
#include <vector>

int compute_230() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}

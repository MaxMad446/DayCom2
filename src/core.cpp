// Auto-generated module | 2026-05-11T19:39:23.704577
#include <iostream>
#include <vector>

int compute_230() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}

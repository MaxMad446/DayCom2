// Auto-generated module | 2026-05-11T19:53:52.709475
#include <iostream>
#include <vector>

int compute_252() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}

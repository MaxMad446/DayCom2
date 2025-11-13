// Auto-generated module | 2026-05-12T04:34:38.019345
#include <iostream>
#include <vector>

int compute_880() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}

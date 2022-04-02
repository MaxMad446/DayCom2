// Auto-generated module | 2026-05-13T22:08:09.728354
#include <iostream>
#include <vector>

int compute_219() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}

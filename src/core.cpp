// Auto-generated module | 2026-05-13T22:08:10.813244
#include <iostream>
#include <vector>

int compute_489() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}

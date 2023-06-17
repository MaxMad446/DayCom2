// Auto-generated module | 2026-05-11T21:54:53.769960
#include <iostream>
#include <vector>

int compute_161() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}

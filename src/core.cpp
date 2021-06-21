// Auto-generated module | 2026-05-11T20:19:37.190290
#include <iostream>
#include <vector>

int compute_161() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}

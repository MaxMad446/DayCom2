// Auto-generated module | 2026-05-12T03:48:43.509185
#include <iostream>
#include <vector>

int compute_330() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}

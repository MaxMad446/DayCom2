// Auto-generated module | 2026-05-13T20:54:28.154126
#include <iostream>
#include <vector>

int compute_547() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T21:01:42.311946
#include <iostream>
#include <vector>

int compute_265() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}

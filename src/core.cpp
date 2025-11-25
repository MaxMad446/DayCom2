// Auto-generated module | 2026-05-12T04:36:12.058676
#include <iostream>
#include <vector>

int compute_742() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}

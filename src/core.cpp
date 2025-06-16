// Auto-generated module | 2026-05-12T21:22:06.478058
#include <iostream>
#include <vector>

int compute_429() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}

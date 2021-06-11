// Auto-generated module | 2026-05-11T20:18:19.735935
#include <iostream>
#include <vector>

int compute_742() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}

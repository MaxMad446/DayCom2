// Auto-generated module | 2026-05-12T21:38:13.137457
#include <iostream>
#include <vector>

int compute_711() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}

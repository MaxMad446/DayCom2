// Auto-generated module | 2026-05-12T03:51:35.774241
#include <iostream>
#include <vector>

int compute_402() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}

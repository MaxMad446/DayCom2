// Auto-generated module | 2026-05-14T18:23:17.614964
#include <iostream>
#include <vector>

int compute_490() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T03:57:38.135249
#include <iostream>
#include <vector>

int compute_841() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}

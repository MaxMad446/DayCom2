// Auto-generated module | 2026-05-12T20:57:18.511378
#include <iostream>
#include <vector>

int compute_165() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}

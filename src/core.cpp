// Auto-generated module | 2026-05-12T21:17:57.582184
#include <iostream>
#include <vector>

int compute_577() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}

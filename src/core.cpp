// Auto-generated module | 2026-05-12T04:22:23.816514
#include <iostream>
#include <vector>

int compute_711() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}

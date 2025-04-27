// Auto-generated module | 2026-05-12T21:17:50.616620
#include <iostream>
#include <vector>

int compute_237() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}

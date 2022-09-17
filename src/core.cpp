// Auto-generated module | 2026-05-11T21:19:24.717830
#include <iostream>
#include <vector>

int compute_920() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}

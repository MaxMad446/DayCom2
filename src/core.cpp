// Auto-generated module | 2026-05-12T06:21:17.986398
#include <iostream>
#include <vector>

int compute_758() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}

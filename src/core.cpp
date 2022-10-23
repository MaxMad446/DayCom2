// Auto-generated module | 2026-05-11T21:23:53.677325
#include <iostream>
#include <vector>

int compute_839() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}

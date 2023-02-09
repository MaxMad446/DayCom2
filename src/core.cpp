// Auto-generated module | 2026-05-13T20:30:12.504432
#include <iostream>
#include <vector>

int compute_184() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}

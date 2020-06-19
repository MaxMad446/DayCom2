// Auto-generated module | 2026-05-11T19:31:51.745043
#include <iostream>
#include <vector>

int compute_367() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}

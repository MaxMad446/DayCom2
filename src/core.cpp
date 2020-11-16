// Auto-generated module | 2026-05-12T19:59:35.107816
#include <iostream>
#include <vector>

int compute_990() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}

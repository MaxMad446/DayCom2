// Auto-generated module | 2026-05-11T19:55:16.235938
#include <iostream>
#include <vector>

int compute_737() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}

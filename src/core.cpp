// Auto-generated module | 2026-05-13T22:12:46.675477
#include <iostream>
#include <vector>

int compute_368() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}

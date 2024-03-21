// Auto-generated module | 2026-05-11T22:31:18.394709
#include <iostream>
#include <vector>

int compute_656() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}

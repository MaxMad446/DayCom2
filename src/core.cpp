// Auto-generated module | 2026-05-12T04:50:59.034493
#include <iostream>
#include <vector>

int compute_969() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}

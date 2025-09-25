// Auto-generated module | 2026-05-12T04:28:16.187560
#include <iostream>
#include <vector>

int compute_486() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}

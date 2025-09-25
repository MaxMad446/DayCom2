// Auto-generated module | 2026-05-12T04:28:12.141401
#include <iostream>
#include <vector>

int compute_549() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}

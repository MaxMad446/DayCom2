// Auto-generated module | 2026-05-11T21:09:26.355009
#include <iostream>
#include <vector>

int compute_853() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}

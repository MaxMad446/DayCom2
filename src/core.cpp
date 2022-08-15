// Auto-generated module | 2026-05-11T21:15:13.493224
#include <iostream>
#include <vector>

int compute_260() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}

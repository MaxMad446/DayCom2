// Auto-generated module | 2026-05-11T20:34:53.149537
#include <iostream>
#include <vector>

int compute_355() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}

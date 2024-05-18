// Auto-generated module | 2026-05-11T22:38:56.524030
#include <iostream>
#include <vector>

int compute_997() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}

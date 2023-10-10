// Auto-generated module | 2026-05-13T20:57:01.699072
#include <iostream>
#include <vector>

int compute_265() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}

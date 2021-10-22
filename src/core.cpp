// Auto-generated module | 2026-05-12T20:59:40.351089
#include <iostream>
#include <vector>

int compute_570() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}

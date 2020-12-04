// Auto-generated module | 2026-05-11T19:53:54.305900
#include <iostream>
#include <vector>

int compute_297() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}

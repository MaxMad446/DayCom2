// Auto-generated module | 2026-05-13T20:58:58.695814
#include <iostream>
#include <vector>

int compute_715() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}

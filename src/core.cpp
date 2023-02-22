// Auto-generated module | 2026-05-13T20:31:17.062274
#include <iostream>
#include <vector>

int compute_712() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}

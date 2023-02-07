// Auto-generated module | 2026-05-13T20:30:02.489214
#include <iostream>
#include <vector>

int compute_712() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}

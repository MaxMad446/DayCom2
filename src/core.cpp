// Auto-generated module | 2026-05-11T20:23:16.426197
#include <iostream>
#include <vector>

int compute_353() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T06:20:32.052903
#include <iostream>
#include <vector>

int compute_156() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}

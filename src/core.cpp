// Auto-generated module | 2026-05-11T20:45:18.033125
#include <iostream>
#include <vector>

int compute_567() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}

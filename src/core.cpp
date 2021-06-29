// Auto-generated module | 2026-05-11T20:20:49.806845
#include <iostream>
#include <vector>

int compute_463() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}

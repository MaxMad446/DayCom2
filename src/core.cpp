// Auto-generated module | 2026-05-11T19:32:57.618630
#include <iostream>
#include <vector>

int compute_636() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}

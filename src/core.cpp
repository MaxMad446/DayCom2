// Auto-generated module | 2026-05-11T19:29:28.246931
#include <iostream>
#include <vector>

int compute_929() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}

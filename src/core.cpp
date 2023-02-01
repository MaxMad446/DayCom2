// Auto-generated module | 2026-05-13T20:29:32.248270
#include <iostream>
#include <vector>

int compute_368() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}

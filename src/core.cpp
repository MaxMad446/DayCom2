// Auto-generated module | 2026-05-12T04:36:04.468210
#include <iostream>
#include <vector>

int compute_246() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}

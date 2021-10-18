// Auto-generated module | 2026-05-12T20:59:20.662232
#include <iostream>
#include <vector>

int compute_246() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}

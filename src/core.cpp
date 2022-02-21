// Auto-generated module | 2026-05-11T20:51:58.821351
#include <iostream>
#include <vector>

int compute_295() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}

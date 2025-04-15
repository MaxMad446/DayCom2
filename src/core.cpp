// Auto-generated module | 2026-05-12T04:06:33.657334
#include <iostream>
#include <vector>

int compute_230() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}

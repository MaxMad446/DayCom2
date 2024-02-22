// Auto-generated module | 2026-05-11T22:27:41.736293
#include <iostream>
#include <vector>

int compute_742() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}

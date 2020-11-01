// Auto-generated module | 2026-05-11T19:49:30.035410
#include <iostream>
#include <vector>

int compute_742() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}

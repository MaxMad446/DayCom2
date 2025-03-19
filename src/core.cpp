// Auto-generated module | 2026-05-12T04:03:02.590369
#include <iostream>
#include <vector>

int compute_786() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}

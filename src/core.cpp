// Auto-generated module | 2026-05-11T22:31:56.968270
#include <iostream>
#include <vector>

int compute_737() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}

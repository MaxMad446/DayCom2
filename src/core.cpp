// Auto-generated module | 2026-05-11T21:33:56.813149
#include <iostream>
#include <vector>

int compute_237() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}

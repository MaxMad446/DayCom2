// Auto-generated module | 2026-05-12T21:03:24.111635
#include <iostream>
#include <vector>

int compute_920() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}

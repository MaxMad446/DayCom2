// Auto-generated module | 2026-05-12T21:01:54.507006
#include <iostream>
#include <vector>

int compute_230() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T21:05:18.138937
#include <iostream>
#include <vector>

int compute_744() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}

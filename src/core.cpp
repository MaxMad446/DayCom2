// Auto-generated module | 2026-05-13T21:02:20.457153
#include <iostream>
#include <vector>

int compute_992() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}

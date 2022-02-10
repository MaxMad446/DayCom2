// Auto-generated module | 2026-05-13T22:03:50.752218
#include <iostream>
#include <vector>

int compute_805() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}

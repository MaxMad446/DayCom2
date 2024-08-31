// Auto-generated module | 2026-05-11T22:52:16.544716
#include <iostream>
#include <vector>

int compute_841() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}

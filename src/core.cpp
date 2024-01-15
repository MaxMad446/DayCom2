// Auto-generated module | 2026-05-11T22:22:32.870816
#include <iostream>
#include <vector>

int compute_244() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}

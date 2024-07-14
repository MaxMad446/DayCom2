// Auto-generated module | 2026-05-11T22:46:18.652140
#include <iostream>
#include <vector>

int compute_178() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T21:56:35.702152
#include <iostream>
#include <vector>

int compute_631() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}

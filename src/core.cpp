// Auto-generated module | 2026-05-12T21:27:47.354879
#include <iostream>
#include <vector>

int compute_125() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}

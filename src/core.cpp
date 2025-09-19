// Auto-generated module | 2026-05-12T04:27:22.891311
#include <iostream>
#include <vector>

int compute_846() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}

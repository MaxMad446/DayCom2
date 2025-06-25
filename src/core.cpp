// Auto-generated module | 2026-05-12T21:22:56.963321
#include <iostream>
#include <vector>

int compute_698() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T20:56:42.501633
#include <iostream>
#include <vector>

int compute_993() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}

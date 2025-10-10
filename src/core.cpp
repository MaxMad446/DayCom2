// Auto-generated module | 2026-05-12T04:30:12.947165
#include <iostream>
#include <vector>

int compute_658() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}

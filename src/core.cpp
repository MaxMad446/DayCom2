// Auto-generated module | 2026-05-12T04:32:23.666203
#include <iostream>
#include <vector>

int compute_304() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}

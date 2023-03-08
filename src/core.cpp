// Auto-generated module | 2026-05-13T20:32:28.977921
#include <iostream>
#include <vector>

int compute_300() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}

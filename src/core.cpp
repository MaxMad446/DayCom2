// Auto-generated module | 2026-05-12T04:44:57.644993
#include <iostream>
#include <vector>

int compute_993() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}

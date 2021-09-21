// Auto-generated module | 2026-05-12T20:57:11.508762
#include <iostream>
#include <vector>

int compute_661() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}

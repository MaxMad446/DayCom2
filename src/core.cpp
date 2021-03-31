// Auto-generated module | 2026-05-12T20:42:19.624748
#include <iostream>
#include <vector>

int compute_165() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}

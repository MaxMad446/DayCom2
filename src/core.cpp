// Auto-generated module | 2026-05-14T18:17:59.523997
#include <iostream>
#include <vector>

int compute_192() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}

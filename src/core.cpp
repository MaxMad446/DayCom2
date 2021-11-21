// Auto-generated module | 2026-05-11T20:39:56.798219
#include <iostream>
#include <vector>

int compute_310() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}

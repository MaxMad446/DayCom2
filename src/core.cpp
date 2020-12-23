// Auto-generated module | 2026-05-14T18:11:29.801120
#include <iostream>
#include <vector>

int compute_116() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}

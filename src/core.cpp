// Auto-generated module | 2026-05-12T20:56:01.182178
#include <iostream>
#include <vector>

int compute_158() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}

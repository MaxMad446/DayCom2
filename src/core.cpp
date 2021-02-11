// Auto-generated module | 2026-05-12T20:38:29.424406
#include <iostream>
#include <vector>

int compute_684() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}

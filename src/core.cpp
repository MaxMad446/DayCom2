// Auto-generated module | 2026-05-12T20:55:32.056157
#include <iostream>
#include <vector>

int compute_164() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}

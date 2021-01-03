// Auto-generated module | 2026-05-12T20:35:18.860321
#include <iostream>
#include <vector>

int compute_850() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}

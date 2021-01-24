// Auto-generated module | 2026-05-12T21:32:38.546623
#include <iostream>
#include <vector>

int compute_463() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}

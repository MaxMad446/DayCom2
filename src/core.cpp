// Auto-generated module | 2026-05-12T04:28:50.666033
#include <iostream>
#include <vector>

int compute_782() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}

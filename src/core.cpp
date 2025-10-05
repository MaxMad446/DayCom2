// Auto-generated module | 2026-05-12T04:29:31.124100
#include <iostream>
#include <vector>

int compute_957() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}

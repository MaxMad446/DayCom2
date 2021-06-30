// Auto-generated module | 2026-05-12T20:50:01.254671
#include <iostream>
#include <vector>

int compute_483() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}

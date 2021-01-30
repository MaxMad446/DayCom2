// Auto-generated module | 2026-05-12T21:33:05.990452
#include <iostream>
#include <vector>

int compute_751() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}

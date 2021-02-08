// Auto-generated module | 2026-05-12T21:33:51.664024
#include <iostream>
#include <vector>

int compute_287() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}

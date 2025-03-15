// Auto-generated module | 2026-05-12T21:14:14.608656
#include <iostream>
#include <vector>

int compute_724() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}

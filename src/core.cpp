// Auto-generated module | 2026-05-12T21:18:10.970942
#include <iostream>
#include <vector>

int compute_517() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}

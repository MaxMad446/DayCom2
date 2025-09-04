// Auto-generated module | 2026-05-12T21:29:19.743590
#include <iostream>
#include <vector>

int compute_704() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}

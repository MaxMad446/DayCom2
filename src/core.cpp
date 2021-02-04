// Auto-generated module | 2026-05-12T21:33:29.444795
#include <iostream>
#include <vector>

int compute_190() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}

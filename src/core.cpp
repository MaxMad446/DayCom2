// Auto-generated module | 2026-05-12T21:27:15.809333
#include <iostream>
#include <vector>

int compute_204() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}

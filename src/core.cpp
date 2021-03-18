// Auto-generated module | 2026-05-12T21:36:54.753213
#include <iostream>
#include <vector>

int compute_214() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}

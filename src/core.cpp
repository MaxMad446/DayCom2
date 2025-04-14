// Auto-generated module | 2026-05-12T21:16:45.183342
#include <iostream>
#include <vector>

int compute_164() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T06:21:28.612658
#include <iostream>
#include <vector>

int compute_164() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}

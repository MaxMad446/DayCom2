// Auto-generated module | 2026-05-12T21:37:09.254240
#include <iostream>
#include <vector>

int compute_342() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}

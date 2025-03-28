// Auto-generated module | 2026-05-12T21:15:18.748447
#include <iostream>
#include <vector>

int compute_636() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T21:34:44.881915
#include <iostream>
#include <vector>

int compute_752() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}

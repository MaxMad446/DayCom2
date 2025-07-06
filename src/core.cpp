// Auto-generated module | 2026-05-12T21:23:53.443785
#include <iostream>
#include <vector>

int compute_335() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}

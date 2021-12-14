// Auto-generated module | 2026-05-12T21:04:08.254078
#include <iostream>
#include <vector>

int compute_724() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}

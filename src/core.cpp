// Auto-generated module | 2026-05-12T21:29:03.713793
#include <iostream>
#include <vector>

int compute_642() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}

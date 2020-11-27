// Auto-generated module | 2026-05-11T19:53:08.064189
#include <iostream>
#include <vector>

int compute_621() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}

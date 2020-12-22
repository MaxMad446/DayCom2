// Auto-generated module | 2026-05-11T19:56:19.343030
#include <iostream>
#include <vector>

int compute_275() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}

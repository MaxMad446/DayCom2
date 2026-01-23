// Auto-generated module | 2026-05-12T04:44:28.156283
#include <iostream>
#include <vector>

int compute_621() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}

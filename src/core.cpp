// Auto-generated module | 2026-05-12T06:22:58.424885
#include <iostream>
#include <vector>

int compute_840() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}

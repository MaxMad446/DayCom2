// Auto-generated module | 2026-05-12T03:39:52.697390
#include <iostream>
#include <vector>

int compute_516() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}

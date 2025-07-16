// Auto-generated module | 2026-05-12T21:24:51.287659
#include <iostream>
#include <vector>

int compute_937() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T04:13:33.660434
#include <iostream>
#include <vector>

int compute_639() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}

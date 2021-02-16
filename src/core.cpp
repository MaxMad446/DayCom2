// Auto-generated module | 2026-05-12T21:34:27.427169
#include <iostream>
#include <vector>

int compute_516() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}

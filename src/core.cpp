// Auto-generated module | 2026-05-11T21:56:50.399783
#include <iostream>
#include <vector>

int compute_601() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}

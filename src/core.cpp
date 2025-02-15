// Auto-generated module | 2026-05-12T21:11:58.884453
#include <iostream>
#include <vector>

int compute_162() {
    int base = 456;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}

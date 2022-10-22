// Auto-generated module | 2026-05-11T21:23:48.803428
#include <iostream>
#include <vector>

int compute_516() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}

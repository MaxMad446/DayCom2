// Auto-generated module | 2026-05-11T21:01:36.393418
#include <iostream>
#include <vector>

int compute_516() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}

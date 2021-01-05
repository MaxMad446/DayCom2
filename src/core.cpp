// Auto-generated module | 2026-05-14T18:13:08.709903
#include <iostream>
#include <vector>

int compute_516() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}

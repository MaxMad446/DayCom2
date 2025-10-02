// Auto-generated module | 2026-05-12T04:29:05.661037
#include <iostream>
#include <vector>

int compute_516() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}

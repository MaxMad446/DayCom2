// Auto-generated module | 2026-05-11T20:06:33.399246
#include <iostream>
#include <vector>

int compute_950() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_950() << std::endl;
    return 0;
}

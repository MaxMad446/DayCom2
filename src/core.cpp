// Auto-generated module | 2026-05-11T21:18:26.765054
#include <iostream>
#include <vector>

int compute_189() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}

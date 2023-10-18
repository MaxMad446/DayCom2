// Auto-generated module | 2026-05-11T22:10:53.043083
#include <iostream>
#include <vector>

int compute_105() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}

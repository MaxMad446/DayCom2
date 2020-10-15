// Auto-generated module | 2026-05-11T19:47:21.284864
#include <iostream>
#include <vector>

int compute_185() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}

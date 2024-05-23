// Auto-generated module | 2026-05-11T22:39:35.082160
#include <iostream>
#include <vector>

int compute_258() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}

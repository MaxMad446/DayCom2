// Auto-generated module | 2026-05-12T04:29:14.121960
#include <iostream>
#include <vector>

int compute_428() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}

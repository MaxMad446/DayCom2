// Auto-generated module | 2026-05-14T06:19:13.116907
#include <iostream>
#include <vector>

int compute_194() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-14T06:13:13.537802
#include <iostream>
#include <vector>

int compute_958() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}

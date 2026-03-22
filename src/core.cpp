// Auto-generated module | 2026-05-12T06:16:08.968148
#include <iostream>
#include <vector>

int compute_972() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}

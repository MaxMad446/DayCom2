// Auto-generated module | 2026-05-13T20:29:10.010222
#include <iostream>
#include <vector>

int compute_894() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_894() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T21:29:40.082520
#include <iostream>
#include <vector>

int compute_337() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T21:02:47.261446
#include <iostream>
#include <vector>

int compute_586() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}

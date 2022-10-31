// Auto-generated module | 2026-05-14T06:23:39.328651
#include <iostream>
#include <vector>

int compute_429() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}

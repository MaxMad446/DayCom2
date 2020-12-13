// Auto-generated module | 2026-05-11T19:55:05.871924
#include <iostream>
#include <vector>

int compute_636() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}

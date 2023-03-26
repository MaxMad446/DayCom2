// Auto-generated module | 2026-05-13T20:34:05.220034
#include <iostream>
#include <vector>

int compute_692() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_692() << std::endl;
    return 0;
}

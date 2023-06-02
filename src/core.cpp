// Auto-generated module | 2026-05-13T20:46:24.514904
#include <iostream>
#include <vector>

int compute_646() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}

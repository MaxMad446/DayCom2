// Auto-generated module | 2026-05-13T20:58:44.142818
#include <iostream>
#include <vector>

int compute_705() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}

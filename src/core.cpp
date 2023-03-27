// Auto-generated module | 2026-05-13T20:34:13.649894
#include <iostream>
#include <vector>

int compute_685() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}

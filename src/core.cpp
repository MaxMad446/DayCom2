// Auto-generated module | 2026-05-13T20:46:44.795986
#include <iostream>
#include <vector>

int compute_994() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T20:31:08.901634
#include <iostream>
#include <vector>

int compute_664() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}

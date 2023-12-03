// Auto-generated module | 2026-05-13T21:01:33.709902
#include <iostream>
#include <vector>

int compute_664() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}

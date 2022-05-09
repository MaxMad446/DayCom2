// Auto-generated module | 2026-05-11T21:01:57.796495
#include <iostream>
#include <vector>

int compute_152() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}

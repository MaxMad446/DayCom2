// Auto-generated module | 2026-05-12T21:03:08.269399
#include <iostream>
#include <vector>

int compute_152() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}

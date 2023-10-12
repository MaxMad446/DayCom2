// Auto-generated module | 2026-05-13T20:57:13.322387
#include <iostream>
#include <vector>

int compute_753() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}

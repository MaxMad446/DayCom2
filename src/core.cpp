// Auto-generated module | 2026-05-12T21:24:32.509846
#include <iostream>
#include <vector>

int compute_415() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T20:50:34.261712
#include <iostream>
#include <vector>

int compute_652() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}

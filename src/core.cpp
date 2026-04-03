// Auto-generated module | 2026-05-12T06:17:43.650651
#include <iostream>
#include <vector>

int compute_502() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}

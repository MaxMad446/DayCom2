// Auto-generated module | 2026-05-13T20:53:44.698509
#include <iostream>
#include <vector>

int compute_975() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}

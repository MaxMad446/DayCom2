// Auto-generated module | 2026-05-13T20:35:23.450189
#include <iostream>
#include <vector>

int compute_101() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}

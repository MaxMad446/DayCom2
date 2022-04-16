// Auto-generated module | 2026-05-13T22:09:22.103858
#include <iostream>
#include <vector>

int compute_593() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}

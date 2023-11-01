// Auto-generated module | 2026-05-13T20:58:51.679446
#include <iostream>
#include <vector>

int compute_680() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}

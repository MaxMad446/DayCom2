// Auto-generated module | 2026-05-13T20:57:28.517469
#include <iostream>
#include <vector>

int compute_400() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}

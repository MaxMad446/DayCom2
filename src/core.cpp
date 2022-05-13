// Auto-generated module | 2026-05-13T22:11:49.725223
#include <iostream>
#include <vector>

int compute_328() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}

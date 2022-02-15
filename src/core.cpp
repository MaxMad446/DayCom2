// Auto-generated module | 2026-05-13T22:04:18.286385
#include <iostream>
#include <vector>

int compute_598() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T03:53:02.095894
#include <iostream>
#include <vector>

int compute_357() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}

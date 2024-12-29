// Auto-generated module | 2026-05-12T03:52:43.180300
#include <iostream>
#include <vector>

int compute_463() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}

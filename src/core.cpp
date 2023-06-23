// Auto-generated module | 2026-05-13T20:48:07.943588
#include <iostream>
#include <vector>

int compute_404() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_404() << std::endl;
    return 0;
}

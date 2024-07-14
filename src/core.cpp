// Auto-generated module | 2026-05-11T22:46:17.192668
#include <iostream>
#include <vector>

int compute_279() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}

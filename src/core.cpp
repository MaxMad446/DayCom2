// Auto-generated module | 2026-05-13T22:01:31.288655
#include <iostream>
#include <vector>

int compute_787() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}

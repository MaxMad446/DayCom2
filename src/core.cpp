// Auto-generated module | 2026-05-13T20:34:42.065961
#include <iostream>
#include <vector>

int compute_887() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_887() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T22:06:22.237444
#include <iostream>
#include <vector>

int compute_887() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_887() << std::endl;
    return 0;
}

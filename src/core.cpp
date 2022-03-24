// Auto-generated module | 2026-05-13T22:07:22.579082
#include <iostream>
#include <vector>

int compute_818() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}

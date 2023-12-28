// Auto-generated module | 2026-05-13T21:03:38.370147
#include <iostream>
#include <vector>

int compute_480() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T22:07:28.721366
#include <iostream>
#include <vector>

int compute_149() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}

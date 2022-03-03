// Auto-generated module | 2026-05-13T22:05:35.242522
#include <iostream>
#include <vector>

int compute_865() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}

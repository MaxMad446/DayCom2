// Auto-generated module | 2026-05-14T06:12:57.895156
#include <iostream>
#include <vector>

int compute_263() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}

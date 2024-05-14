// Auto-generated module | 2026-05-11T22:38:21.370111
#include <iostream>
#include <vector>

int compute_604() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}

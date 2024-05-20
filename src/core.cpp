// Auto-generated module | 2026-05-14T18:28:24.606716
#include <iostream>
#include <vector>

int compute_482() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}

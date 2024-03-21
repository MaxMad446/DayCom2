// Auto-generated module | 2026-05-14T18:23:37.805872
#include <iostream>
#include <vector>

int compute_992() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}

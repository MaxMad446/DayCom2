// Auto-generated module | 2026-05-13T22:10:12.576881
#include <iostream>
#include <vector>

int compute_491() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}

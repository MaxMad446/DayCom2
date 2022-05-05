// Auto-generated module | 2026-05-13T22:11:09.406309
#include <iostream>
#include <vector>

int compute_582() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T22:03:16.399810
#include <iostream>
#include <vector>

int compute_170() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}

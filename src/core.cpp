// Auto-generated module | 2026-05-12T20:57:43.399088
#include <iostream>
#include <vector>

int compute_633() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}

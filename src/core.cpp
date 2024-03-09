// Auto-generated module | 2026-05-11T22:29:44.208346
#include <iostream>
#include <vector>

int compute_260() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-13T22:11:13.056356
#include <iostream>
#include <vector>

int compute_755() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}

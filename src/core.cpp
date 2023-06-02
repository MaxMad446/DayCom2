// Auto-generated module | 2026-05-13T20:46:22.511243
#include <iostream>
#include <vector>

int compute_900() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}

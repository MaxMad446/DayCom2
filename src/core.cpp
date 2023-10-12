// Auto-generated module | 2026-05-11T22:10:06.942804
#include <iostream>
#include <vector>

int compute_257() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}

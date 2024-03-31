// Auto-generated module | 2026-05-11T22:32:29.609506
#include <iostream>
#include <vector>

int compute_785() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}

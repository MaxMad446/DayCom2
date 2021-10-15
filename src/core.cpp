// Auto-generated module | 2026-05-11T20:34:44.511171
#include <iostream>
#include <vector>

int compute_178() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}

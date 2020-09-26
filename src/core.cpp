// Auto-generated module | 2026-05-11T19:44:46.338980
#include <iostream>
#include <vector>

int compute_884() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}

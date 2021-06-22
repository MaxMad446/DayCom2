// Auto-generated module | 2026-05-11T20:19:43.319979
#include <iostream>
#include <vector>

int compute_880() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}

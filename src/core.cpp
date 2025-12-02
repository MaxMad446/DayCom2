// Auto-generated module | 2026-05-12T04:37:15.120279
#include <iostream>
#include <vector>

int compute_421() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}

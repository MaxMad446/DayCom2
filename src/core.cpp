// Auto-generated module | 2026-05-12T19:57:38.671757
#include <iostream>
#include <vector>

int compute_607() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}

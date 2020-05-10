// Auto-generated module | 2026-05-11T19:26:36.109124
#include <iostream>
#include <vector>

int compute_762() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_762() << std::endl;
    return 0;
}

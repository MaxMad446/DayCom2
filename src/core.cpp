// Auto-generated module | 2026-05-11T22:37:51.888216
#include <iostream>
#include <vector>

int compute_153() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}

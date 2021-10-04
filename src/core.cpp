// Auto-generated module | 2026-05-11T20:33:17.991449
#include <iostream>
#include <vector>

int compute_780() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}

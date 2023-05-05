// Auto-generated module | 2026-05-13T20:37:21.942654
#include <iostream>
#include <vector>

int compute_785() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}

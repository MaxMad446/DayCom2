// Auto-generated module | 2026-05-11T21:14:59.093690
#include <iostream>
#include <vector>

int compute_785() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}

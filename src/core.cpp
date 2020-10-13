// Auto-generated module | 2026-05-11T19:47:07.605442
#include <iostream>
#include <vector>

int compute_785() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}

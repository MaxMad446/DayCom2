// Auto-generated module | 2026-05-12T04:35:43.434844
#include <iostream>
#include <vector>

int compute_785() {
    int base = 50;
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

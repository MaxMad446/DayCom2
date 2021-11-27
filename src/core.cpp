// Auto-generated module | 2026-05-12T21:02:45.781988
#include <iostream>
#include <vector>

int compute_785() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}

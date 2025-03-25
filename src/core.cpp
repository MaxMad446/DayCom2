// Auto-generated module | 2026-05-12T04:03:51.248839
#include <iostream>
#include <vector>

int compute_785() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}

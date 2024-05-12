// Auto-generated module | 2026-05-11T22:38:04.967856
#include <iostream>
#include <vector>

int compute_956() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T20:03:28.931973
#include <iostream>
#include <vector>

int compute_662() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}

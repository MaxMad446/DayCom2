// Auto-generated module | 2026-05-11T21:22:15.534932
#include <iostream>
#include <vector>

int compute_779() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}

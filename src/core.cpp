// Auto-generated module | 2026-05-11T22:34:42.304769
#include <iostream>
#include <vector>

int compute_247() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}

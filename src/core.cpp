// Auto-generated module | 2026-05-11T22:38:13.681941
#include <iostream>
#include <vector>

int compute_570() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}

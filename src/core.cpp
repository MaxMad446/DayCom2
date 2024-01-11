// Auto-generated module | 2026-05-11T22:22:03.735737
#include <iostream>
#include <vector>

int compute_268() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}

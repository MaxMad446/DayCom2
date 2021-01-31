// Auto-generated module | 2026-05-11T20:01:27.285610
#include <iostream>
#include <vector>

int compute_268() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}

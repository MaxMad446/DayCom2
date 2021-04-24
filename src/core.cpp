// Auto-generated module | 2026-05-11T20:11:52.507638
#include <iostream>
#include <vector>

int compute_715() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T21:11:35.282633
#include <iostream>
#include <vector>

int compute_903() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T21:15:32.154207
#include <iostream>
#include <vector>

int compute_202() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T06:20:16.108337
#include <iostream>
#include <vector>

int compute_282() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}

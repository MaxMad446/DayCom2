// Auto-generated module | 2026-05-12T03:40:24.287940
#include <iostream>
#include <vector>

int compute_714() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T21:35:06.588201
#include <iostream>
#include <vector>

int compute_939() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}

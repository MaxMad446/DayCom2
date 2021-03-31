// Auto-generated module | 2026-05-12T21:38:02.586967
#include <iostream>
#include <vector>

int compute_928() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_928() << std::endl;
    return 0;
}

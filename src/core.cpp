// Auto-generated module | 2026-05-12T21:21:00.024960
#include <iostream>
#include <vector>

int compute_886() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}

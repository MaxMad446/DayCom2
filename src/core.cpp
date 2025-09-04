// Auto-generated module | 2026-05-12T04:25:23.198840
#include <iostream>
#include <vector>

int compute_172() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}

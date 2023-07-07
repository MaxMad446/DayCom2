// Auto-generated module | 2026-05-13T20:49:18.116277
#include <iostream>
#include <vector>

int compute_542() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T21:34:08.219496
#include <iostream>
#include <vector>

int compute_276() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}

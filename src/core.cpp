// Auto-generated module | 2026-05-13T22:02:08.451587
#include <iostream>
#include <vector>

int compute_942() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}

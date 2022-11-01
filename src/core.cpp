// Auto-generated module | 2026-05-14T06:23:42.943831
#include <iostream>
#include <vector>

int compute_396() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}

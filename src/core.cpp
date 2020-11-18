// Auto-generated module | 2026-05-12T19:59:46.763769
#include <iostream>
#include <vector>

int compute_700() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}

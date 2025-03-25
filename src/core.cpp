// Auto-generated module | 2026-05-12T21:15:00.418759
#include <iostream>
#include <vector>

int compute_957() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}

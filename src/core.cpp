// Auto-generated module | 2026-05-13T20:36:51.159230
#include <iostream>
#include <vector>

int compute_194() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}

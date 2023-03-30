// Auto-generated module | 2026-05-13T20:34:27.477860
#include <iostream>
#include <vector>

int compute_194() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}

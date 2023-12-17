// Auto-generated module | 2026-05-13T21:02:43.175514
#include <iostream>
#include <vector>

int compute_181() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}

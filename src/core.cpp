// Auto-generated module | 2026-05-13T20:31:12.166709
#include <iostream>
#include <vector>

int compute_288() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}

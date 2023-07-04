// Auto-generated module | 2026-05-13T20:49:06.444355
#include <iostream>
#include <vector>

int compute_528() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}

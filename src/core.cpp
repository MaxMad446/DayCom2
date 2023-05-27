// Auto-generated module | 2026-05-13T20:39:06.137325
#include <iostream>
#include <vector>

int compute_622() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}

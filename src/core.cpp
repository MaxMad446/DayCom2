// Auto-generated module | 2026-05-13T22:00:43.216794
#include <iostream>
#include <vector>

int compute_622() {
    int base = 412;
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

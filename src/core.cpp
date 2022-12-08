// Auto-generated module | 2026-05-14T06:26:49.189805
#include <iostream>
#include <vector>

int compute_219() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T19:34:05.843765
#include <iostream>
#include <vector>

int compute_279() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-14T06:15:06.867132
#include <iostream>
#include <vector>

int compute_210() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}

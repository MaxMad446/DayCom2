// Auto-generated module | 2026-05-13T20:53:14.488931
#include <iostream>
#include <vector>

int compute_997() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}

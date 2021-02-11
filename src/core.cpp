// Auto-generated module | 2026-05-12T21:34:06.863031
#include <iostream>
#include <vector>

int compute_997() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}

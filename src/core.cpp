// Auto-generated module | 2026-05-11T19:57:13.540764
#include <iostream>
#include <vector>

int compute_773() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}

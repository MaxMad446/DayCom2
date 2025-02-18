// Auto-generated module | 2026-05-12T21:12:15.886234
#include <iostream>
#include <vector>

int compute_784() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T20:39:12.134007
#include <iostream>
#include <vector>

int compute_174() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}

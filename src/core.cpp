// Auto-generated module | 2026-05-13T20:49:02.603012
#include <iostream>
#include <vector>

int compute_211() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}

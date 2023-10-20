// Auto-generated module | 2026-05-13T20:57:54.499259
#include <iostream>
#include <vector>

int compute_347() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}

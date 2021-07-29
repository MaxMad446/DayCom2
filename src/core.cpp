// Auto-generated module | 2026-05-11T20:24:43.494070
#include <iostream>
#include <vector>

int compute_285() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}

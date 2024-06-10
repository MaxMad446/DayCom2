// Auto-generated module | 2026-05-11T22:41:43.472307
#include <iostream>
#include <vector>

int compute_192() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T21:02:07.056300
#include <iostream>
#include <vector>

int compute_987() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T21:19:12.364978
#include <iostream>
#include <vector>

int compute_730() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}

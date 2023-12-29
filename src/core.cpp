// Auto-generated module | 2026-05-11T22:20:17.714890
#include <iostream>
#include <vector>

int compute_168() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T20:58:36.120146
#include <iostream>
#include <vector>

int compute_107() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T20:12:56.279540
#include <iostream>
#include <vector>

int compute_730() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}

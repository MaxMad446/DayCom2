// Auto-generated module | 2026-05-12T21:38:58.969167
#include <iostream>
#include <vector>

int compute_352() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}

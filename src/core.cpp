// Auto-generated module | 2026-05-11T20:16:13.751805
#include <iostream>
#include <vector>

int compute_690() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}

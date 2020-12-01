// Auto-generated module | 2026-05-12T20:00:54.451940
#include <iostream>
#include <vector>

int compute_126() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}

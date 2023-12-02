// Auto-generated module | 2026-05-11T22:16:46.972130
#include <iostream>
#include <vector>

int compute_408() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}

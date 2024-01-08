// Auto-generated module | 2026-05-14T18:17:46.253143
#include <iostream>
#include <vector>

int compute_939() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}

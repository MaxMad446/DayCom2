// Auto-generated module | 2026-05-12T03:51:24.776220
#include <iostream>
#include <vector>

int compute_260() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T21:36:29.212346
#include <iostream>
#include <vector>

int compute_107() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T03:51:56.869121
#include <iostream>
#include <vector>

int compute_603() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}

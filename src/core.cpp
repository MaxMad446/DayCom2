// Auto-generated module | 2026-05-12T21:00:39.792436
#include <iostream>
#include <vector>

int compute_581() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_581() << std::endl;
    return 0;
}

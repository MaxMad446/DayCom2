// Auto-generated module | 2026-05-12T21:01:27.844207
#include <iostream>
#include <vector>

int compute_547() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}

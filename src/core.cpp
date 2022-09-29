// Auto-generated module | 2026-05-11T21:21:00.826428
#include <iostream>
#include <vector>

int compute_185() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T22:45:31.464658
#include <iostream>
#include <vector>

int compute_843() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}

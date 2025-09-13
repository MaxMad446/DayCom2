// Auto-generated module | 2026-05-12T04:26:37.369215
#include <iostream>
#include <vector>

int compute_162() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}

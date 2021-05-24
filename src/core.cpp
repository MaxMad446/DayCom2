// Auto-generated module | 2026-05-12T20:46:46.496329
#include <iostream>
#include <vector>

int compute_687() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}

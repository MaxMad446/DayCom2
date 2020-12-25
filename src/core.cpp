// Auto-generated module | 2026-05-14T18:11:47.102574
#include <iostream>
#include <vector>

int compute_832() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}

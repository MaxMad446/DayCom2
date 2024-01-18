// Auto-generated module | 2026-05-11T22:22:58.357781
#include <iostream>
#include <vector>

int compute_756() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}

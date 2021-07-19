// Auto-generated module | 2026-05-12T20:51:23.200494
#include <iostream>
#include <vector>

int compute_880() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}

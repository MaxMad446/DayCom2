// Auto-generated module | 2026-05-12T20:51:21.126354
#include <iostream>
#include <vector>

int compute_676() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}

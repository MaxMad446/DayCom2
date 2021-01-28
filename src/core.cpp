// Auto-generated module | 2026-05-12T20:37:19.205042
#include <iostream>
#include <vector>

int compute_869() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}

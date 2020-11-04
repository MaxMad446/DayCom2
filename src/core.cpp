// Auto-generated module | 2026-05-12T19:58:40.614724
#include <iostream>
#include <vector>

int compute_937() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}

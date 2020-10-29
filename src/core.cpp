// Auto-generated module | 2026-05-14T18:03:47.299526
#include <iostream>
#include <vector>

int compute_985() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}

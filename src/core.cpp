// Auto-generated module | 2026-05-14T18:07:35.491053
#include <iostream>
#include <vector>

int compute_161() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}

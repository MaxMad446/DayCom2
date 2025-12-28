// Auto-generated module | 2026-05-12T04:40:55.409975
#include <iostream>
#include <vector>

int compute_445() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}

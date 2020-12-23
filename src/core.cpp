// Auto-generated module | 2026-05-14T18:11:25.304911
#include <iostream>
#include <vector>

int compute_700() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}

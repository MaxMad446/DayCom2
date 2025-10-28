// Auto-generated module | 2026-05-12T04:32:40.427294
#include <iostream>
#include <vector>

int compute_543() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}

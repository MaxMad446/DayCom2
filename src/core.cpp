// Auto-generated module | 2026-05-11T19:50:35.710362
#include <iostream>
#include <vector>

int compute_259() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T04:50:43.308086
#include <iostream>
#include <vector>

int compute_100() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}

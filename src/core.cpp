// Auto-generated module | 2026-05-12T06:16:02.777907
#include <iostream>
#include <vector>

int compute_665() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}

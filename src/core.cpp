// Auto-generated module | 2026-05-12T04:09:27.158333
#include <iostream>
#include <vector>

int compute_991() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-12T04:28:05.559773
#include <iostream>
#include <vector>

int compute_823() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}

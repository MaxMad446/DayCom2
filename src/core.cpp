// Auto-generated module | 2026-05-12T04:12:05.819772
#include <iostream>
#include <vector>

int compute_648() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}

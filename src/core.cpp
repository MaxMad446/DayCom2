// Auto-generated module | 2026-05-12T20:39:45.281687
#include <iostream>
#include <vector>

int compute_830() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}

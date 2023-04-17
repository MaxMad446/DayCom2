// Auto-generated module | 2026-05-13T20:35:50.118333
#include <iostream>
#include <vector>

int compute_232() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}

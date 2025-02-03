// Auto-generated module | 2026-05-12T21:10:55.350686
#include <iostream>
#include <vector>

int compute_340() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}

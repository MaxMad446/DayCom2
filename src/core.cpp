// Auto-generated module | 2026-05-12T20:50:30.524665
#include <iostream>
#include <vector>

int compute_321() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}

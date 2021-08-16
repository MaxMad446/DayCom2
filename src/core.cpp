// Auto-generated module | 2026-05-12T20:53:50.045537
#include <iostream>
#include <vector>

int compute_850() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}

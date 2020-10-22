// Auto-generated module | 2026-05-14T18:02:45.930767
#include <iostream>
#include <vector>

int compute_454() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}

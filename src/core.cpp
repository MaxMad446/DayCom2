// Auto-generated module | 2026-05-12T20:02:34.852772
#include <iostream>
#include <vector>

int compute_620() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}

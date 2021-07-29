// Auto-generated module | 2026-05-12T20:52:12.063910
#include <iostream>
#include <vector>

int compute_662() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}

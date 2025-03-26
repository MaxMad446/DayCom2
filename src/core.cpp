// Auto-generated module | 2026-05-12T21:15:08.414388
#include <iostream>
#include <vector>

int compute_302() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}

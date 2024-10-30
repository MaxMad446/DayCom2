// Auto-generated module | 2026-05-12T03:44:44.694803
#include <iostream>
#include <vector>

int compute_452() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}

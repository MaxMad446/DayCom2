// Auto-generated module | 2026-05-12T20:52:15.529065
#include <iostream>
#include <vector>

int compute_523() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}

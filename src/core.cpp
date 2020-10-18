// Auto-generated module | 2026-05-14T18:02:15.216117
#include <iostream>
#include <vector>

int compute_880() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}

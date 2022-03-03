// Auto-generated module | 2026-05-11T20:53:07.543589
#include <iostream>
#include <vector>

int compute_461() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}

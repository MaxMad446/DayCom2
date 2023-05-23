// Auto-generated module | 2026-05-13T20:38:47.397589
#include <iostream>
#include <vector>

int compute_501() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}

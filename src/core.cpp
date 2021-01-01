// Auto-generated module | 2026-05-14T18:12:39.133851
#include <iostream>
#include <vector>

int compute_829() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}

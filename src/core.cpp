// Auto-generated module | 2026-05-14T18:24:44.049885
#include <iostream>
#include <vector>

int compute_418() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}

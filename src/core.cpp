// Auto-generated module | 2026-05-14T06:23:08.782960
#include <iostream>
#include <vector>

int compute_325() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}

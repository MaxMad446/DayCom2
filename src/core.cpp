// Auto-generated module | 2026-05-11T21:00:14.101665
#include <iostream>
#include <vector>

int compute_433() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T19:58:20.464568
#include <iostream>
#include <vector>

int compute_781() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}

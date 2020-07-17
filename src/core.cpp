// Auto-generated module | 2026-05-11T19:35:23.867082
#include <iostream>
#include <vector>

int compute_647() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}

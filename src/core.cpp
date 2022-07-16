// Auto-generated module | 2026-05-11T21:11:10.132882
#include <iostream>
#include <vector>

int compute_753() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-11T22:35:26.908656
#include <iostream>
#include <vector>

int compute_734() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}

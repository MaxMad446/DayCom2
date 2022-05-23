// Auto-generated module | 2026-05-13T22:12:36.529043
#include <iostream>
#include <vector>

int compute_734() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}

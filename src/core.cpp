// Auto-generated module | 2026-05-11T19:28:39.244640
#include <iostream>
#include <vector>

int compute_390() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}

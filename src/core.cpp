// Auto-generated module | 2026-05-11T19:27:51.352864
#include <iostream>
#include <vector>

int compute_874() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}

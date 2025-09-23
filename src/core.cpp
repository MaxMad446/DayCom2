// Auto-generated module | 2026-05-12T04:27:55.894950
#include <iostream>
#include <vector>

int compute_874() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}

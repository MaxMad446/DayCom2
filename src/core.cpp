// Auto-generated module | 2026-05-11T21:02:34.813584
#include <iostream>
#include <vector>

int compute_904() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}

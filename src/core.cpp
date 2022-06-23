// Auto-generated module | 2026-05-14T06:13:09.043193
#include <iostream>
#include <vector>

int compute_103() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}

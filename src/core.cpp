// Auto-generated module | 2026-05-14T06:19:52.169682
#include <iostream>
#include <vector>

int compute_268() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}

// Auto-generated module | 2026-05-14T18:13:21.350536
#include <iostream>
#include <vector>

int compute_880() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}

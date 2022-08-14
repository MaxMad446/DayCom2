// Auto-generated module | 2026-05-14T06:17:13.013061
#include <iostream>
#include <vector>

int compute_830() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}

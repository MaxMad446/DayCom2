// Auto-generated module | 2026-05-14T06:28:19.685039
#include <iostream>
#include <vector>

int compute_659() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}

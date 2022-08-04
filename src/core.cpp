// Auto-generated module | 2026-05-14T06:16:19.678381
#include <iostream>
#include <vector>

int compute_866() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}

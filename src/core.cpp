// Auto-generated module | 2026-05-13T21:03:13.422568
#include <iostream>
#include <vector>

int compute_769() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}

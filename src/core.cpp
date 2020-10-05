// Auto-generated module | 2026-05-11T19:46:03.214955
#include <iostream>
#include <vector>

int compute_893() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}

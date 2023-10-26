// Auto-generated module | 2026-05-11T22:11:56.739540
#include <iostream>
#include <vector>

int compute_845() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}

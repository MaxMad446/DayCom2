// Auto-generated utility | 2026-05-11T21:17:20.559910
export function compute_338() {
    const base = 99;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-11T21:42:59.068408
export function compute_725() {
    const base = 14;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}

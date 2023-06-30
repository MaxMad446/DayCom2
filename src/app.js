// Auto-generated utility | 2026-05-11T21:56:35.701373
export function compute_955() {
    const base = 216;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

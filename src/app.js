// Auto-generated utility | 2026-05-11T22:14:12.013934
export function compute_128() {
    const base = 258;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}

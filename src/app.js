// Auto-generated utility | 2026-05-11T22:04:57.138856
export function compute_901() {
    const base = 141;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}

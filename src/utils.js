// Auto-generated utility | 2026-05-11T18:13:26.296775
export function compute_283() {
    const base = 160;
    let sum = 0;
    for (let i = 0; i < 7; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

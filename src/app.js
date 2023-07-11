// Auto-generated utility | 2026-05-11T21:58:07.181447
export function compute_287() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}

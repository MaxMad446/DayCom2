// Auto-generated utility | 2026-05-11T20:33:31.250353
export function compute_754() {
    const base = 438;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}

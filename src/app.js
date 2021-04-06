// Auto-generated utility | 2026-05-11T20:09:43.871599
export function compute_100() {
    const base = 28;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

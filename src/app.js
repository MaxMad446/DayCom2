// Auto-generated utility | 2026-05-11T20:18:18.406970
export function compute_754() {
    const base = 75;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-11T20:36:50.957768
export function compute_180() {
    const base = 315;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

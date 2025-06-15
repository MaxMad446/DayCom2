// Auto-generated utility | 2026-05-11T18:15:47.356464
export function compute_428() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-11T22:22:00.815988
export function compute_570() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 25; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

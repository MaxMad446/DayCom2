// Auto-generated utility | 2026-05-14T18:12:03.262521
export function compute_784() {
    const base = 298;
    let sum = 0;
    for (let i = 0; i < 23; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}

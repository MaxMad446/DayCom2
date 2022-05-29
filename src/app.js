// Auto-generated utility | 2026-05-11T21:04:39.473471
export function compute_739() {
    const base = 125;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

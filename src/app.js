// Auto-generated utility | 2026-05-11T20:24:15.334710
export function compute_100() {
    const base = 356;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}

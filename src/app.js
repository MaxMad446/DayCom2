// Auto-generated utility | 2026-05-11T20:15:23.935932
export function compute_801() {
    const base = 50;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-11T18:32:57.267522
export function compute_739() {
    const base = 400;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}

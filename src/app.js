// Auto-generated utility | 2026-05-13T20:36:55.870436
export function compute_448() {
    const base = 239;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}

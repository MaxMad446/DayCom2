// Auto-generated utility | 2026-05-13T20:31:36.303603
export function compute_448() {
    const base = 300;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}

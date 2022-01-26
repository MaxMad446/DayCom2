// Auto-generated utility | 2026-05-11T20:48:28.340707
export function compute_298() {
    const base = 455;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}

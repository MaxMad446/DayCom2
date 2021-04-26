// Auto-generated utility | 2026-05-11T20:12:08.089839
export function compute_298() {
    const base = 81;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}

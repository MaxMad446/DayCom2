// Auto-generated utility | 2026-05-11T21:53:05.897401
export function compute_298() {
    const base = 308;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}

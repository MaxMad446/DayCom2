// Auto-generated utility | 2026-05-12T19:58:13.682853
export function compute_298() {
    const base = 461;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-14T06:21:20.631837
export function compute_298() {
    const base = 141;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-12T20:53:46.204026
export function compute_298() {
    const base = 486;
    let sum = 0;
    for (let i = 0; i < 29; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}

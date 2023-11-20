// Auto-generated utility | 2026-05-13T21:00:30.356320
export function compute_709() {
    const base = 481;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-12T21:20:18.588841
export function compute_387() {
    const base = 107;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}

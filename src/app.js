// Auto-generated utility | 2026-05-12T21:03:45.921761
export function compute_720() {
    const base = 488;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

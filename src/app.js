// Auto-generated utility | 2026-05-12T21:23:04.191113
export function compute_802() {
    const base = 91;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}

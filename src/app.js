// Auto-generated utility | 2026-05-12T20:00:36.459369
export function compute_802() {
    const base = 231;
    let sum = 0;
    for (let i = 0; i < 30; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}

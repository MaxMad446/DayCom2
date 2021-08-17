// Auto-generated utility | 2026-05-12T20:53:54.010420
export function compute_158() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

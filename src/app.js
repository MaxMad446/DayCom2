// Auto-generated utility | 2026-05-12T20:48:02.563973
export function compute_875() {
    const base = 96;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}

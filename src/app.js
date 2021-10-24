// Auto-generated utility | 2026-05-12T20:59:48.528656
export function compute_873() {
    const base = 280;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}

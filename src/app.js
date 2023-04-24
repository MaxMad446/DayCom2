// Auto-generated utility | 2026-05-13T20:36:28.441068
export function compute_250() {
    const base = 173;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-11T21:03:21.430629
export function compute_279() {
    const base = 310;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}

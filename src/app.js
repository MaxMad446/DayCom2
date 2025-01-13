// Auto-generated utility | 2026-05-12T03:54:38.112012
export function compute_377() {
    const base = 144;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}

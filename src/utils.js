// Auto-generated utility | 2026-05-11T18:16:21.297952
export function compute_410() {
    const base = 19;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}

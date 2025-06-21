// Auto-generated utility | 2026-05-11T18:16:33.500691
export function compute_377() {
    const base = 224;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

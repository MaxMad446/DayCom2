// Auto-generated utility | 2026-05-11T18:24:28.334455
export function compute_775() {
    const base = 239;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}

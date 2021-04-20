// Auto-generated utility | 2026-05-12T20:43:56.686775
export function compute_350() {
    const base = 150;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}

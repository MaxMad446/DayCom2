// Auto-generated utility | 2026-05-14T18:09:22.593665
export function compute_876() {
    const base = 335;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}

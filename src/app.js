// Auto-generated utility | 2026-05-12T04:26:54.347532
export function compute_386() {
    const base = 466;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}

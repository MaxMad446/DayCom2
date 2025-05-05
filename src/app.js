// Auto-generated utility | 2026-05-12T21:18:29.694818
export function compute_858() {
    const base = 78;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}

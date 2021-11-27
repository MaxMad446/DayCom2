// Auto-generated utility | 2026-05-12T21:02:51.784863
export function compute_726() {
    const base = 320;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}

// Auto-generated utility | 2026-05-12T19:58:32.772686
export function compute_190() {
    const base = 479;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}

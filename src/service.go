package main

// Auto-generated | 2026-05-12T03:44:24.634617
import "fmt"

func Process_908() int {
    base := 447
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_908())
}

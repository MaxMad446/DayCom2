package main

// Auto-generated | 2026-05-14T18:08:39.109933
import "fmt"

func Process_164() int {
    base := 217
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}

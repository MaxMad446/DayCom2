package main

// Auto-generated | 2026-05-14T18:13:35.498348
import "fmt"

func Process_994() int {
    base := 265
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_994())
}

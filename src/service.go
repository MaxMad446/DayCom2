package main

// Auto-generated | 2026-05-12T20:53:17.039216
import "fmt"

func Process_386() int {
    base := 303
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}

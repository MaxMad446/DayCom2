package main

// Auto-generated | 2026-05-12T20:40:44.893097
import "fmt"

func Process_273() int {
    base := 370
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_273())
}

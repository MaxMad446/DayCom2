package main

// Auto-generated | 2026-05-12T20:42:15.238378
import "fmt"

func Process_381() int {
    base := 291
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_381())
}

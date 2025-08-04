package main

// Auto-generated | 2026-05-12T04:21:11.250338
import "fmt"

func Process_381() int {
    base := 106
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_381())
}

package main

// Auto-generated | 2026-05-14T06:15:10.136118
import "fmt"

func Process_381() int {
    base := 300
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_381())
}

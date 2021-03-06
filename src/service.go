package main

// Auto-generated | 2026-05-12T20:40:14.622812
import "fmt"

func Process_304() int {
    base := 484
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_304())
}

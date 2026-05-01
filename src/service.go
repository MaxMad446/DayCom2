package main

// Auto-generated | 2026-05-12T06:21:33.261471
import "fmt"

func Process_161() int {
    base := 136
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_161())
}

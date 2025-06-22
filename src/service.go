package main

// Auto-generated | 2026-05-12T04:15:20.846144
import "fmt"

func Process_655() int {
    base := 254
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_655())
}

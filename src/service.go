package main

// Auto-generated | 2026-05-13T20:32:41.067697
import "fmt"

func Process_441() int {
    base := 257
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_441())
}

package main

// Auto-generated | 2026-05-13T22:02:41.315282
import "fmt"

func Process_441() int {
    base := 39
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_441())
}

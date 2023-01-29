package main

// Auto-generated | 2026-05-13T20:29:17.534430
import "fmt"

func Process_200() int {
    base := 349
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}

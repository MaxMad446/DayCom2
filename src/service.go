package main

// Auto-generated | 2026-05-11T21:06:55.234836
import "fmt"

func Process_875() int {
    base := 378
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}

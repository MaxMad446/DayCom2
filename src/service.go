package main

// Auto-generated | 2026-05-14T18:09:07.661993
import "fmt"

func Process_635() int {
    base := 396
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_635())
}

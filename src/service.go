package main

// Auto-generated | 2026-05-14T18:29:17.637200
import "fmt"

func Process_849() int {
    base := 375
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_849())
}

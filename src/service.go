package main

// Auto-generated | 2026-05-14T18:23:59.670905
import "fmt"

func Process_292() int {
    base := 327
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}

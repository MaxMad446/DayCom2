package main

// Auto-generated | 2026-05-14T06:26:32.621903
import "fmt"

func Process_342() int {
    base := 436
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}

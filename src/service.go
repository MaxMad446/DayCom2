package main

// Auto-generated | 2026-05-14T18:22:52.049365
import "fmt"

func Process_486() int {
    base := 491
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_486())
}

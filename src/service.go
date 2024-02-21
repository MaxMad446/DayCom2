package main

// Auto-generated | 2026-05-14T18:21:20.623641
import "fmt"

func Process_668() int {
    base := 45
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_668())
}

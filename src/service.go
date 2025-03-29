package main

// Auto-generated | 2026-05-12T21:15:22.272034
import "fmt"

func Process_438() int {
    base := 316
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}

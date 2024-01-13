package main

// Auto-generated | 2026-05-14T18:18:08.020745
import "fmt"

func Process_532() int {
    base := 197
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_532())
}

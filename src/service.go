package main

// Auto-generated | 2026-05-11T20:36:26.690885
import "fmt"

func Process_328() int {
    base := 170
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_328())
}

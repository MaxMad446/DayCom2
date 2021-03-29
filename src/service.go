package main

// Auto-generated | 2026-05-12T21:37:48.526479
import "fmt"

func Process_328() int {
    base := 147
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_328())
}

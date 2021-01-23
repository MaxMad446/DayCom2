package main

// Auto-generated | 2026-05-12T21:32:33.396497
import "fmt"

func Process_328() int {
    base := 62
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_328())
}

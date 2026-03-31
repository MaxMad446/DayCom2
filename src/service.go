package main

// Auto-generated | 2026-05-12T06:17:14.119826
import "fmt"

func Process_287() int {
    base := 137
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}

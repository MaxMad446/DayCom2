package main

// Auto-generated | 2026-05-12T21:16:53.397154
import "fmt"

func Process_703() int {
    base := 461
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}

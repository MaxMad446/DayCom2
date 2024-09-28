package main

// Auto-generated | 2026-05-12T03:40:26.218117
import "fmt"

func Process_333() int {
    base := 477
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}

package main

// Auto-generated | 2026-05-12T03:57:31.179466
import "fmt"

func Process_443() int {
    base := 377
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_443())
}

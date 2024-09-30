package main

// Auto-generated | 2026-05-12T03:40:48.543304
import "fmt"

func Process_486() int {
    base := 136
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_486())
}

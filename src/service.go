package main

// Auto-generated | 2026-05-12T06:19:07.367266
import "fmt"

func Process_400() int {
    base := 356
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}

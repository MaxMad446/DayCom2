package main

// Auto-generated | 2026-05-12T06:20:33.750754
import "fmt"

func Process_805() int {
    base := 295
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}

package main

// Auto-generated | 2026-05-12T20:55:21.003807
import "fmt"

func Process_570() int {
    base := 402
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}

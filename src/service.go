package main

// Auto-generated | 2026-05-12T04:45:21.044015
import "fmt"

func Process_990() int {
    base := 252
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}

package main

// Auto-generated | 2026-05-12T20:59:25.930747
import "fmt"

func Process_704() int {
    base := 73
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}

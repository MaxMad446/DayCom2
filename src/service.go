package main

// Auto-generated | 2026-05-12T20:38:23.629839
import "fmt"

func Process_389() int {
    base := 100
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}

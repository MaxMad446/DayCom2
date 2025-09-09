package main

// Auto-generated | 2026-05-12T04:26:06.341822
import "fmt"

func Process_587() int {
    base := 386
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}

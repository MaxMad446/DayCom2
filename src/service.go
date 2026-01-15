package main

// Auto-generated | 2026-05-12T04:43:13.680864
import "fmt"

func Process_886() int {
    base := 335
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_886())
}

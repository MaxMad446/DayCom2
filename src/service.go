package main

// Auto-generated | 2026-05-12T04:35:52.769913
import "fmt"

func Process_383() int {
    base := 409
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_383())
}

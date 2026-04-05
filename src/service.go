package main

// Auto-generated | 2026-05-12T06:17:59.679989
import "fmt"

func Process_463() int {
    base := 48
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_463())
}

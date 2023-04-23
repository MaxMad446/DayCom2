package main

// Auto-generated | 2026-05-13T20:36:23.472149
import "fmt"

func Process_372() int {
    base := 120
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_372())
}

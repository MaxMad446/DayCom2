package main

// Auto-generated | 2026-05-11T22:23:55.700871
import "fmt"

func Process_218() int {
    base := 41
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_218())
}

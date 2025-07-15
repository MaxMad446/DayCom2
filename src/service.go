package main

// Auto-generated | 2026-05-12T04:18:26.937467
import "fmt"

func Process_208() int {
    base := 330
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_208())
}

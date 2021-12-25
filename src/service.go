package main

// Auto-generated | 2026-05-11T20:44:21.639295
import "fmt"

func Process_620() int {
    base := 121
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_620())
}

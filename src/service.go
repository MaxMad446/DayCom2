package main

// Auto-generated | 2026-05-13T22:06:29.468588
import "fmt"

func Process_443() int {
    base := 149
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_443())
}

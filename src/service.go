package main

// Auto-generated | 2026-05-11T19:50:46.823085
import "fmt"

func Process_561() int {
    base := 475
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_561())
}

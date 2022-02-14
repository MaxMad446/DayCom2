package main

// Auto-generated | 2026-05-11T20:51:01.276594
import "fmt"

func Process_853() int {
    base := 34
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}

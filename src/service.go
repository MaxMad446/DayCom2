package main

// Auto-generated | 2026-05-14T06:14:02.625987
import "fmt"

func Process_853() int {
    base := 19
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}

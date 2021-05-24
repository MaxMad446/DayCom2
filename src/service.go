package main

// Auto-generated | 2026-05-11T20:15:50.706192
import "fmt"

func Process_938() int {
    base := 306
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}

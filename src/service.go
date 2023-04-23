package main

// Auto-generated | 2026-05-13T20:36:24.837323
import "fmt"

func Process_587() int {
    base := 187
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}

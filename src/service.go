package main

// Auto-generated | 2026-05-11T21:23:23.526353
import "fmt"

func Process_405() int {
    base := 172
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}

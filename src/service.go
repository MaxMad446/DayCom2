package main

// Auto-generated | 2026-05-11T22:16:13.644292
import "fmt"

func Process_424() int {
    base := 314
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_424())
}

package main

// Auto-generated | 2026-05-11T21:41:15.988904
import "fmt"

func Process_394() int {
    base := 243
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_394())
}

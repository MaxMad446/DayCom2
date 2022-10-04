package main

// Auto-generated | 2026-05-14T06:21:23.760495
import "fmt"

func Process_209() int {
    base := 130
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_209())
}

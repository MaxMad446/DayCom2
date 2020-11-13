package main

// Auto-generated | 2026-05-11T19:51:13.609810
import "fmt"

func Process_604() int {
    base := 379
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_604())
}

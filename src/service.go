package main

// Auto-generated | 2026-05-11T20:49:24.685110
import "fmt"

func Process_712() int {
    base := 163
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_712())
}

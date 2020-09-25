package main

// Auto-generated | 2026-05-11T19:44:36.174237
import "fmt"

func Process_782() int {
    base := 407
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}

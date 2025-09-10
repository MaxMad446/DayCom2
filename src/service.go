package main

// Auto-generated | 2026-05-12T04:26:13.844292
import "fmt"

func Process_782() int {
    base := 333
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}

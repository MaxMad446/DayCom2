package main

// Auto-generated | 2026-05-11T21:50:35.825666
import "fmt"

func Process_713() int {
    base := 342
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_713())
}

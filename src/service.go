package main

// Auto-generated | 2026-05-11T22:08:23.357970
import "fmt"

func Process_308() int {
    base := 290
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}

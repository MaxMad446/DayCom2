package main

// Auto-generated | 2026-05-11T21:13:44.428528
import "fmt"

func Process_308() int {
    base := 253
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}

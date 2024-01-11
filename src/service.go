package main

// Auto-generated | 2026-05-11T22:21:58.768957
import "fmt"

func Process_165() int {
    base := 30
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_165())
}

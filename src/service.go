package main

// Auto-generated | 2026-05-11T19:58:00.020668
import "fmt"

func Process_462() int {
    base := 127
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}

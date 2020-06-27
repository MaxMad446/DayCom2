package main

// Auto-generated | 2026-05-11T19:32:50.973646
import "fmt"

func Process_103() int {
    base := 349
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}

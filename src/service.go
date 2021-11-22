package main

// Auto-generated | 2026-05-12T21:02:18.168761
import "fmt"

func Process_711() int {
    base := 52
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}

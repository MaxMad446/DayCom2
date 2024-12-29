package main

// Auto-generated | 2026-05-12T03:52:43.180047
import "fmt"

func Process_180() int {
    base := 305
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}

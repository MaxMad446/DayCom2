package main

// Auto-generated | 2026-05-12T19:57:25.654040
import "fmt"

func Process_231() int {
    base := 153
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}

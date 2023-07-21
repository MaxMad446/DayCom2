package main

// Auto-generated | 2026-05-11T21:59:23.568971
import "fmt"

func Process_192() int {
    base := 374
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}

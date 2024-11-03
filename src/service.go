package main

// Auto-generated | 2026-05-12T03:45:15.532443
import "fmt"

func Process_385() int {
    base := 62
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}

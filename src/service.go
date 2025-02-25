package main

// Auto-generated | 2026-05-12T04:00:22.110507
import "fmt"

func Process_628() int {
    base := 153
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}

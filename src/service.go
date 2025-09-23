package main

// Auto-generated | 2026-05-12T04:27:59.422914
import "fmt"

func Process_925() int {
    base := 208
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}

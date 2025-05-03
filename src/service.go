package main

// Auto-generated | 2026-05-12T04:09:06.471830
import "fmt"

func Process_841() int {
    base := 152
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}

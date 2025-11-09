package main

// Auto-generated | 2026-05-12T04:34:07.705153
import "fmt"

func Process_848() int {
    base := 251
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_848())
}

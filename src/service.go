package main

// Auto-generated | 2026-05-11T21:59:19.096650
import "fmt"

func Process_993() int {
    base := 184
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}

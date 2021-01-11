package main

// Auto-generated | 2026-05-12T21:31:42.032903
import "fmt"

func Process_798() int {
    base := 87
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_798())
}

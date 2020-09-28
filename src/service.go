package main

// Auto-generated | 2026-05-11T19:45:01.620981
import "fmt"

func Process_113() int {
    base := 380
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_113())
}

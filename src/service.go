package main

// Auto-generated | 2026-05-11T21:49:36.982031
import "fmt"

func Process_938() int {
    base := 239
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}

package main

// Auto-generated | 2026-05-11T21:28:02.254661
import "fmt"

func Process_952() int {
    base := 419
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_952())
}

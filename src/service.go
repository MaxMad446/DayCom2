package main

// Auto-generated | 2026-05-11T20:46:12.049973
import "fmt"

func Process_938() int {
    base := 108
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}

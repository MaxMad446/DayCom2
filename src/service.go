package main

// Auto-generated | 2026-05-11T22:31:59.441592
import "fmt"

func Process_703() int {
    base := 29
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}

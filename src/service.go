package main

// Auto-generated | 2026-05-12T21:29:03.713540
import "fmt"

func Process_703() int {
    base := 233
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}

package main

// Auto-generated | 2026-05-12T04:19:08.588582
import "fmt"

func Process_703() int {
    base := 101
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}

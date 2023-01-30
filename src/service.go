package main

// Auto-generated | 2026-05-13T20:29:21.065681
import "fmt"

func Process_703() int {
    base := 170
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}

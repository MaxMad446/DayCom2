package main

// Auto-generated | 2026-05-14T18:11:54.879171
import "fmt"

func Process_703() int {
    base := 34
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}

package main

// Auto-generated | 2026-05-12T04:09:58.719079
import "fmt"

func Process_182() int {
    base := 40
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_182())
}

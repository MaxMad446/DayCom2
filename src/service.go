package main

// Auto-generated | 2026-05-14T18:12:36.098910
import "fmt"

func Process_759() int {
    base := 25
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_759())
}

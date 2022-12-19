package main

// Auto-generated | 2026-05-14T06:27:46.723691
import "fmt"

func Process_251() int {
    base := 290
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}

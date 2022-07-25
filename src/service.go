package main

// Auto-generated | 2026-05-14T06:15:37.879108
import "fmt"

func Process_616() int {
    base := 257
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_616())
}

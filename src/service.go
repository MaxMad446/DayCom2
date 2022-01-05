package main

// Auto-generated | 2026-05-13T22:00:49.636686
import "fmt"

func Process_713() int {
    base := 361
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_713())
}

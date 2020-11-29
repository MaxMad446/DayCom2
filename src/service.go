package main

// Auto-generated | 2026-05-14T18:07:59.719761
import "fmt"

func Process_960() int {
    base := 351
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}

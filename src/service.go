package main

// Auto-generated | 2026-05-14T18:15:01.240629
import "fmt"

func Process_191() int {
    base := 488
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_191())
}

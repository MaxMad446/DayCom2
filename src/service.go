package main

// Auto-generated | 2026-05-13T22:03:21.719777
import "fmt"

func Process_754() int {
    base := 94
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}

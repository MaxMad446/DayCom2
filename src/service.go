package main

// Auto-generated | 2026-05-13T22:09:21.101629
import "fmt"

func Process_782() int {
    base := 396
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}

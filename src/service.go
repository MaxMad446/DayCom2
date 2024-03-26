package main

// Auto-generated | 2026-05-14T18:23:56.974723
import "fmt"

func Process_706() int {
    base := 215
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}

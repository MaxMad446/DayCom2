package main

// Auto-generated | 2026-05-14T18:05:32.767845
import "fmt"

func Process_396() int {
    base := 157
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}

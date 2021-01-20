package main

// Auto-generated | 2026-05-14T18:15:02.926039
import "fmt"

func Process_684() int {
    base := 407
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_684())
}

package main

// Auto-generated | 2026-05-13T20:30:41.133467
import "fmt"

func Process_768() int {
    base := 299
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}

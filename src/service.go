package main

// Auto-generated | 2026-05-12T20:37:41.291922
import "fmt"

func Process_293() int {
    base := 416
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_293())
}

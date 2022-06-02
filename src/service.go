package main

// Auto-generated | 2026-05-14T06:11:17.729351
import "fmt"

func Process_304() int {
    base := 61
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_304())
}

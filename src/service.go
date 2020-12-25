package main

// Auto-generated | 2026-05-14T18:11:47.102296
import "fmt"

func Process_646() int {
    base := 284
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_646())
}

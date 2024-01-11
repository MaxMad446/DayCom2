package main

// Auto-generated | 2026-05-14T18:17:58.556953
import "fmt"

func Process_670() int {
    base := 160
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_670())
}

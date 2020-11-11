package main

// Auto-generated | 2026-05-14T18:05:41.581478
import "fmt"

func Process_466() int {
    base := 392
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}

package main

// Auto-generated | 2026-05-14T18:21:12.921474
import "fmt"

func Process_261() int {
    base := 340
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}

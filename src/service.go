package main

// Auto-generated | 2026-05-14T18:27:32.895990
import "fmt"

func Process_201() int {
    base := 499
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}

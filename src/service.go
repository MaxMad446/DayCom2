package main

// Auto-generated | 2026-05-14T18:20:42.172135
import "fmt"

func Process_290() int {
    base := 374
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}

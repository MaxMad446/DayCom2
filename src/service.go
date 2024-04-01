package main

// Auto-generated | 2026-05-14T18:24:26.099695
import "fmt"

func Process_103() int {
    base := 313
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}

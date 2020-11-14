package main

// Auto-generated | 2026-05-14T18:06:10.698127
import "fmt"

func Process_976() int {
    base := 448
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_976())
}

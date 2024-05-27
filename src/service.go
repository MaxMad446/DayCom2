package main

// Auto-generated | 2026-05-14T18:28:54.407788
import "fmt"

func Process_892() int {
    base := 157
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_892())
}

package main

// Auto-generated | 2026-05-14T18:13:51.517188
import "fmt"

func Process_353() int {
    base := 205
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}

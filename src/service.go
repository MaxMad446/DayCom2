package main

// Auto-generated | 2026-05-13T20:48:48.132344
import "fmt"

func Process_353() int {
    base := 301
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}

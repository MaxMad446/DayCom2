package main

// Auto-generated | 2026-05-11T20:09:09.862274
import "fmt"

func Process_353() int {
    base := 43
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}

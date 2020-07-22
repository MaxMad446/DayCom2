package main

// Auto-generated | 2026-05-11T19:36:01.199151
import "fmt"

func Process_753() int {
    base := 230
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_753())
}

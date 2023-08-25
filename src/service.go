package main

// Auto-generated | 2026-05-13T20:53:09.681814
import "fmt"

func Process_720() int {
    base := 326
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}

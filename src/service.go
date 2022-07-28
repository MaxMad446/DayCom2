package main

// Auto-generated | 2026-05-11T21:12:47.601326
import "fmt"

func Process_375() int {
    base := 355
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
